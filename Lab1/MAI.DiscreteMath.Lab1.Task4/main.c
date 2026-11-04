#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define IS_OPERATOR_CHAR(c) (\
(c) == '!' || \
(c) == '&' || \
(c) == '+' || \
(c) == '^' || \
(c) == '=' || \
(c) == '>' || \
(c) == '<' || \
(c) == '-' || \
(c) == '|' || \
(c) == '$')

//stack_on_array_declaration_for(char);

//stack_on_array_declaration_for(int);

int main(
    int argc,
    char *argv[])
{
    /*char const *operators[] =
    {
        "!", // inversion
        "&", // conjunction
        "+", // disjunction
        "^", // xor
        "=", // equivalence
        "->", // implication
        "|->", // coimplication
        "<-", // inverted implication
        "<-|", // inverted coimplication
        "|", // Sheffer stroke
        "$", // Pierce arrow
    };
    FILE *input_file;
    char c, c_ = ' ';
    //stack_on_array_of_char operators_stack;
    //stack_on_array_of_int values_stack;
    int variables_bit_mask = 0;
    
    if (argc != 2)
    {
        printf("Usage: \"%s input_file_path\"", argv[0]);

        return -1;
    }

    switch (init_stack_on_array_of_char(&operators_stack, 16))
    {
    case 1:
        printf("");
        return 1;
    case 2:
        printf("");
        return 4;
    }

    switch (init_stack_on_array_of_char(&operators_stack, 16))
    {
    case 1:
        // TODO
        break;
    case 2:
        // TODO
        break;
    }

    if (!(input_file = fopen(argv[1], "r")))
    {
        printf("Input file can't be opened");

        deinit_stack_on_array_of_char(&operators_stack);

        return -2;
    }

    while (!feof(input_file))
    {
        c = fgetc(input_file);

        if (c == '(')
        {
            
        }
        else if (c == ')')
        {

        }
        else if (c == EOF)
        {

        }
        else if (is_operator_char(c))
        {

        }

        c_ = c;
    }

    fclose(input_file);
    deinit_stack_on_array_of_char(&operators_stack);
    */
    return 0;
}