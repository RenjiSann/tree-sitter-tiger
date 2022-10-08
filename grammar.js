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

const OCT_DIGIT = /[0-7]/;
const DEC_DIGIT = /[0-9]/;
const HEX_DIGIT = /[0-9a-fA-F]/;

const COMMENT = /\/\*.*\*\//;
const EOL = /(\n\r|\r\n|\n)+/;

const IDENTIFIER = /[a-zA-Z]([a-zA-Z0-9_]*)|_main/;
const NUMBER = /\d+/;

module.exports = grammar({
    name: "tiger",

    externals: ($) => [$.comment],
    extras: ($) => [$.comment, EOL, /( |\t|\r|\n)+/],

    rules: {
        program: ($) => choice($.expression, optional($.chunks)),

        expression: ($) => choice($.tok_nil, $.tok_number, $.tok_string),

        chunks: ($) => "\t",

        // Lexing tokens
        tok_id: ($) => IDENTIFIER,

        tok_nil: ($) => "nil",

        tok_number: ($) => NUMBER,

        tok_string: ($) => {
            const _normal_char = /[^\\]/;
            const _escapable = /[abfnrtv]|[0-7]{3}|x[a-fA-F0-9]{2}|\\|"/;
            return token(
                seq(
                    '"',
                    field(
                        "content",
                        repeat(choice(_normal_char, seq("\\", _escapable)))
                    ),
                    '"'
                )
            );
        },
    },
});
