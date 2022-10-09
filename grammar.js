const PREC = {
    "*": 5,
    "/": 5,
    "+": 4,
    "-": 4,
    "<": 3,
    ">": 3,
    "<=": 3,
    ">=": 3,
    "=": 3,
    "<>": 3,
    "|": 2,
    "&": 2,
};

const EOL = /\n\r|\r\n|\n/;
const WHITESPACE = / |\t/;

const IDENTIFIER = /[a-zA-Z]([a-zA-Z0-9_]*)|_main/;
const NUMBER = /\d+/;

const sep_list = (element, separator) =>
    seq(element, repeat(seq(separator, element)));

module.exports = grammar({
    name: "tiger",

    externals: ($) => [$.comment],
    extras: ($) => [$.comment, EOL, WHITESPACE],

    word: ($) => $.id,

    conflicts: ($) => [
        [$.type_id, $.lvalue],
        [$.func_call, $.lvalue],
    ],

    rules: {
        program: ($) => choice($._expr, optional(repeat($._chunk))),

        _exprs: ($) => sep_list($._expr, ";"),
        _expr: ($) =>
            choice(
                // Literals
                $.nil,
                $.number_literal,
                $.string_literal,
                // Function calls
                $.func_call,
                // Binary/unary operators
                $.binop,
                $.unop,
                // Control blocks
                $.break,
                $.if_expr,
                $.while_expr,
                $.for_expr,
                $.let_expr,
                // Assignement
                $.var_assign,
                // Lvalue
                $.lvalue,
                // Array/record instanciation
                $.array_inst,
                $.record_inst,
                // ( exps )
                $._parenthesis_exp
            ),

        lvalue: ($) =>
            choice(
                $.id,
                // Record (struct) member access
                seq($.lvalue, $.id),
                // Array access
                seq($.lvalue, "[", $._expr, "]")
            ),

        var_assign: ($) => seq($.lvalue, ":=", $._expr),

        array_inst: ($) => seq($.type_id, "[", $._expr, "]", "of", $._expr),
        record_inst: ($) =>
            seq(
                $.type_id,
                "{",
                optional(sep_list(seq($.id, "=", $._expr), ",")),
                "}",
                "of",
                $._expr
            ),

        func_call: ($) =>
            seq(
                field("func_name", $.id),
                "(",
                optional(sep_list($._expr, ",")),
                ")"
            ),

        // https://github.com/tjdevries/tree-sitter-lua/blob/master/grammar.js
        binop: ($) =>
            choice(
                ...["*", "/", "+", "-", "&", "|"].map((op) =>
                    prec.left(
                        PREC[op],
                        seq(field("left", $._expr), op, field("right", $._expr))
                    )
                ),
                ...["<", ">", "<=", ">=", "=", "<>"].map((op) =>
                    // Using prec.left for now, but < and all are not associative
                    prec.left(
                        PREC[op],
                        seq(field("left", $._expr), op, field("right", $._expr))
                    )
                )
            ),

        unop: ($) => prec(6, seq("-", $._expr)),

        _parenthesis_exp: ($) => seq("(", optional($._exprs), ")"),

        // Control blocks
        if_expr: ($) =>
            prec.right(
                seq(
                    "if",
                    field("condition", $._expr),
                    "then",
                    field("body", $._expr),
                    field("else", optional(seq("else", $._expr)))
                )
            ),

        while_expr: ($) =>
            seq(
                "while",
                field("condition", $._expr),
                "do",
                field("body", $._expr)
            ),

        for_expr: ($) =>
            seq(
                "for",
                field("var", $.id),
                ":=",
                field("var_start", $._expr),
                "to",
                field("var_end", $._expr),
                "do",
                field("body", $._expr)
            ),

        let_expr: ($) =>
            seq(
                "let",
                field("decl", optional($.chunks)),
                "in",
                field("exp", optional($._exprs)),
                "end"
            ),

        // Chunks
        chunks: ($) => repeat1($._chunk),
        _chunk: ($) =>
            choice(
                $.type_dec,
                $.func_dec,
                $.var_dec,
                seq("import", $.string_literal)
            ),

        type_dec: ($) => seq("type", field("type_name", $.type_id), "=", $._ty),

        func_dec: ($) =>
            seq(
                "function",
                field("func_name", $.id),
                "(",
                field("func_args", optional($.tyfields)),
                ")",
                field("func_type", optional(seq(":", $.type_id))),
                "=",
                field("func_body", $._expr)
            ),

        var_dec: ($) =>
            seq(
                "var",
                field("var_name", $.id),
                optional(seq(":", field("var_type", $._ty))),
                ":=",
                field("var_expr", $._expr)
            ),

        // Types
        _ty: ($) =>
            choice(
                $.type_id,
                // Record type declaration
                seq("{", optional($.tyfields), "}"),
                // Array type declaration
                seq("array", "of", $.type_id)
            ),
        tyfields: ($) => sep_list($.tyfield, ","),
        tyfield: ($) => seq($.id, ":", $.type_id),
        type_id: ($) => choice("int", "string", $.id),

        // Lexing tokens
        id: (_) => IDENTIFIER,

        number_literal: (_) => NUMBER,

        // A string literal is a sequence of characters (other than \ and ")
        // between double quotes, possibly with escape sequences.
        string_literal: ($) =>
            seq(
                '"',
                field("content", repeat(choice(/[^\\"]/, $.escape_sequence))),
                '"'
            ),
        escape_sequence: (_) => /\\(?:[abfnrtv]|[0-7]{3}|x[a-fA-F0-9]{2}|\\|")/,

        // Keywords
        nil: (_) => token("nil"),
        break: (_) => token("break"),
    },
});
