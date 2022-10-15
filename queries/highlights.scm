; highlights.scm

; Comments are comments
(comment) @comment

; Keywords
[
    "array"
    "if"
    "then"
    "else"
    "while"
    "for"
    "do"
    "let"
    "in"
    "end"
    "of"
    "function"
    "var"
    "to"
    "type"
    "import"
 ;   "primitive"
] @keyword
(nil) @variable.builtin
(break) @keyword

; types
["int" "string"] @type.builtin
(type_id) @type

(number_literal) @number
(string_literal) @string
(escape_sequence) @string.special

; Special characters
[
    "*" "/" "+" "-" "<" ">" "<=" ">=" "<>" "=" "&" "|" ":="
] @operator
[";" ","] @punctuation.delimiter


; function names
(func_call
    func_name: (id) @function)
(func_dec
    func_name: (id) @function)


(id) @variable
