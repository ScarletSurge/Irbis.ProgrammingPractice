#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define and &&

#pragma warning(disable: 4996)

int foo(void);

// int x;

/// <summary>
/// моя функция main :)
/// </summary>
/// <param name="param">параметр функции main :/</param>
/// <returns>результат работы программы!!1!1</returns>
int main(int param)
{
    // 1 2 3 4 5 6 7 8 9 10 11 12 ...
    printf("Hello, world!\n");
    
    /*//*/
    // //
    ///
    ///*/* */*/

    int x = 45;
    // x + 10;
    // x * 10;
    // //"//"
    // int *p; // identifiers consists of: 0-9, a-z, A-Z, _
    // p + 10;
    // p * 10; // *p

    // scanf("%d", &x);
    // 
    // printf("%d", 8 / x);

    // boolean, bool ---C---> int
    // expr is false -> exps equals to 0
    // otherwise, expr is true -> expr not equals to 0
    // 
    // conditional operator
    // if (conditional_expression1)
    // {
    //     // actions, when conditional_expression1 is true
    // }
    // [else if (conditional_expression2)
    // {
    //     // actions, when conditional_expression1 is false AND conditional_expression2 is true
    // }
    // [else if (conditional_expression3)
    // {
    //     // actions, when conditional_expression1 is false AND conditional_expression2 is false AND conditional_expression3 is true
    // }
    // ...]]
    // [else
    // {
    //     // actions, when all previous conditional expressions were false
    // }]

    // %d - decimal (int in base == 10)
    // %o - octal (int in base == 8)
    // %x - octal (int in base == 16, small letters)
    // %X - octal (int in base == 16, BIG LETTERS)
    // %u, %c, %s, %f, %lf, %e, %g, %p, %%
    printf("First value: %%%%, second value: %X\n", x * 10, x * 10);

    switch (x)
    {
    case 1:
        // TODO: actions when x == 1
        break;
    case 2:
        // TODO: actions when x == 2
        break;
    case 3:
        // TODO: actions when x == 3
        break;
    case 67:
        // TODO: actions when x == 67
        break;
    default:

        break;
    }

    if (0.25 + 0.25 == 0.5)
    {
        printf("OK\nOK\n");
    }
    else
    {
        printf("NOT OK\n\n\n");
    }

    if (x % 3 == 0 && x % 2 == 0)
    {
        printf("x is dividable by 6");
    }
    else if (x % 3 == 0)
    {
        printf("x is dividable by 3");
    }
    else if (x % 2 == 0)
    {
        printf("x is dividable by 2");
    }
    else
    {
        printf("x is not dividable by 2 and not dividable by 3");
    } // if/else if/else

    return 0;
}

int foo(void)
{
    return 0;
}