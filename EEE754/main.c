#include <stdio.h>

int float_impl()
{
    size_t const shifted_order_bits_count = 8;
    size_t i;

    float f = 27;
    int *f_addr = (int *)&f;
    int target_bits_combined = (*f_addr >> ((sizeof(int) << 3) - shifted_order_bits_count - 1)) & ((1 << shifted_order_bits_count) - 1);

    for (i = 0; i < shifted_order_bits_count; ++i)
    {
        printf("%c", '0' + ((target_bits_combined >> (shifted_order_bits_count - 1 - i)) & 1));
    }

    return 0;
}

int double_impl()
{
    size_t const shifted_order_bits_count = 11;
    size_t i;

    double d = 1;
    int *f_addr = ((int *)&d) + 1;
    int target_bits_combined = (*f_addr >> ((sizeof(int) << 3) - shifted_order_bits_count - 1)) & ((1 << shifted_order_bits_count) - 1);

    for (i = 0; i < shifted_order_bits_count; ++i)
    {
        printf("%c", '0' + ((target_bits_combined >> (shifted_order_bits_count - 1 - i)) & 1));
    }

    return 0;
}

int main()
{
    return float_impl();
    return double_impl();

    return 0;
}