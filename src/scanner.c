#include <stdbool.h>
#include <tree_sitter/parser.h>

enum TokenType
{
    COMMENT,
};

bool is_tiger_whitespace(char c)
{
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

void *tree_sitter_tiger_external_scanner_create()
{
    return NULL;
}

void tree_sitter_tiger_external_scanner_destroy(void *payload)
{}

unsigned tree_sitter_tiger_external_scanner_serialize(void *payload,
                                                      char *buffer)
{
    return 0;
}

void tree_sitter_tiger_external_scanner_deserialize(void *payload,
                                                    char const *buffer,
                                                    unsigned length)
{}

bool tree_sitter_tiger_external_scanner_scan(void *payload, TSLexer *lexer,
                                             bool const *valid_symbols)
{
    // Do not start lexing a comment if a comment cannot be here.
    if (!valid_symbols[COMMENT])
        return false;

    // For some reason, we must skip preceding whitespaces and newlines
    // manually.
    while (is_tiger_whitespace(lexer->lookahead))
        lexer->advance(lexer, false);

    if (lexer->lookahead != '/')
        return false;
    lexer->advance(lexer, true);
    if (lexer->lookahead != '*')
        return false;
    lexer->advance(lexer, true);

    int depth = 1;

    // Consume characters until arriving on the corresponding closing symbol.
    while (!lexer->eof(lexer) && depth > 0)
    {
        char c = lexer->lookahead;
        lexer->advance(lexer, true);
        // Encountered '*/'
        if (c == '*' && lexer->lookahead == '/')
        {
            lexer->advance(lexer, true);
            depth -= 1;
        }
        // Encountered '/*'
        else if (c == '/' && lexer->lookahead == '*') {
            lexer->advance(lexer, true);
            depth += 1;
        }
    }

    return depth == 0;
}