#include <stdio.h>

// main: EMPTY -> int
// string formats: C-style, Pascal-style
// IEEE-754

double distance(
    double x,
    double y,
    double z)
{
    return pow(pow(x, 2) + pow(y, 2) + pow(z, 2), 0.5);
}

int main()
{
    distance(3, 4, 5);
    int variable;
    int const value = ((1 << 21) + (17 << 16)) + ((1 << 13) + (17 << 8)) + ((1 << 5) + 17);
    printf("Hello, world!!1!1 \"%s\"", &value);

    // cos: R -> [-1..1] e R

    // int variable = 0; // initialization
    variable = 10; // assignment
    // double variable = 10.0;

    // foo() = 10; - foo() must be lvalue
    


    // operators: arithmetical, logical, bitwise, preprocessor, indexer, call, comma, dot/arrow, ... 

    return 0;
}