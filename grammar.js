const KEYWORDS = [
    "array",
    "if",
    "then",
    "else",
    "while",
    "for",
    "to",
    "do",
    "let",
    "in",
    "end",
    "of",
    "break",
    "nil",
    "function",
    "var",
    "type",
    "import",
    "primitive",
];
const OBJ_KEYWORDS = ["class", "extends", "method", "new"];
const SYMBOLS = [
    ",",
    ":",
    ";",
    "(",
    ")",
    "[",
    "]",
    "{",
    "}",
    ".",
    "+",
    "-",
    "*",
    "/",
    "=",
    "<>",
    "<",
    "<=",
    ">",
    ">=",
    "&",
    "|",
    ":=",
];

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

module.exports = grammar({
    name: "tiger",

    externals: ($) => [$.comment],
    extras: ($) => [$.comment, EOL, WHITESPACE],

    word: ($) => $.identifier,

    rules: {
        program: ($) => choice($._expr, optional($.chunks)),
        chunks: ($) => "\t",

        _expr: ($) =>
            choice(
                $.nil,
                $.number_literal,
                $.string_literal,
                $.func_call,
                $.binop,
                $.unop,
                $.if_expr,
                $.while_expr,
                $._parenthesis_exp
            ),

        func_call: ($) =>
            seq(
                field("func_name", $.identifier),
                "(",
                optional(seq($._expr, repeat(seq(",", $._expr)))),
                ")"
            ),

        // https://github.com/tjdevries/tree-sitter-lua/blob/master/grammar.js
        binop: ($) =>
            choice(
                ...["*", "/", "+", "-", "&", "|"].map((op) =>
                    prec.left(PREC[op], seq($._expr, op, $._expr))
                ),
                ...["<", ">", "<=", ">=", "=", "<>"].map((op) =>
                    // Using prec.left for now, but < and all are not associative
                    prec.left(PREC[op], seq($._expr, op, $._expr))
                )
            ),

        unop: ($) => seq("-", $._expr),

        _parenthesis_exp: ($) =>
            seq("(", optional(seq($._expr, repeat(seq(";", $._expr)))), ")"),

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

        // Lexing tokens
        identifier: ($) => IDENTIFIER,

        number_literal: ($) => NUMBER,

        string_literal: ($) => {
            const _allowed_char = /[^\\"]/;
            const _escape = /\\(?:[abfnrtv]|[0-7]{3}|x[a-fA-F0-9]{2}|\\|")/;
            return token(
                seq(
                    '"',
                    field("content", repeat(choice(_allowed_char, _escape))),
                    '"'
                )
            );
        },

        // Keywords
        nil: ($) => "nil",
    },
});
