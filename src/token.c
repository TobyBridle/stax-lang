#include "includes/token.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

token_t* init_token(char* tok, int type)
{
    token_t* token = calloc(1, sizeof(struct TOKEN_STRUCT));
    token->tok = tok;
    token->type = type;

    return token;
}

char* token_to_string(int type)
{
    switch(type)
    {
        
        case TOKEN_ID:      return "TOKEN_ID";
        case TOKEN_COLON:   return "TOKEN_COLON";
        case TOKEN_COMMA:   return "TOKEN_COMMA";

        case TOKEN_STRING:  return "TOKEN_STRING";
        case TOKEN_INT:     return "TOKEN_INT";
        case TOKEN_FLOAT:   return "TOKEN_FLOAT";

        case TOKEN_LPAREN:  return "TOKEN_LPAREN";
        case TOKEN_RPAREN:  return "TOKEN_RPAREN";
        case TOKEN_LBRACE:  return "TOKEN_LBRACE";
        case TOKEN_RBRACE:  return "TOKEN_RBRACE";
        case TOKEN_LCOMP:   return "TOKEN_LCOMP";
        case TOKEN_RCOMP:   return "TOKEN_RCOMP";

        case TOKEN_EQUAL:   return "TOKEN_EQUAL";
        case TOKEN_PLUS:    return "TOKEN_PLUS";
        case TOKEN_MINUS:   return "TOKEN_MINUS";
        case TOKEN_MULT:    return "TOKEN_MULT";
        case TOKEN_DIV:     return "TOKEN_DIV";
    
        case TOKEN_FUNC:    return "TOKEN_FUNC";
        case TOKEN_IF:      return "TOKEN_IF";
        case TOKEN_END:     return "TOKEN_END";
        case TOKEN_EOF:     return "TOKEN_EOF";
        default:
            printf("[Lexer] Invalid Token Type (%d)\n", type);
            exit(1);
    }
}
