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
        program: ($) => choice($._expression, optional($.chunks)),
        chunks: ($) => "\t",

        _expression: ($) =>
            choice(
                $.tok_nil,
                $.number_literal,
                $.string_literal,
                $.func_call,
                $.binop,
                $._parenthesis_exp
            ),

        func_call: ($) =>
            seq(
                field("func_name", $.identifier),
                $._tok_lpar,
                optional(seq($._expression, repeat(seq(",", $._expression)))),
                $._tok_rpar
            ),

        // https://github.com/tjdevries/tree-sitter-lua/blob/master/grammar.js
        binop: ($) =>
            choice(
                ...["*", "/", "+", "-", "&", "|"].map((op) =>
                    prec.left(PREC[op], seq($._expression, op, $._expression))
                ),
                ...["<", ">", "<=", ">=", "=", "<>"].map((op) =>
                    // Using prec.left for now, but < and all are not associative
                    prec.left(PREC[op], seq($._expression, op, $._expression))
                )
            ),

        _parenthesis_exp: ($) =>
            seq(
                $._tok_lpar,
                optional(seq($._expression, repeat(seq(";", $._expression)))),
                $._tok_rpar
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

        _tok_lpar: ($) => "(",
        _tok_rpar: ($) => ")",
        _tok_lbrack: ($) => "[",
        _tok_rbrack: ($) => "]",

        // Keywords
        tok_nil: ($) => "nil",
        tok_true: ($) => "true",
        tok_false: ($) => "false",
    },
});
