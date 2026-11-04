#include <stdio.h>

typedef unsigned char gf256_poly;
typedef unsigned char gf256_modulo;

gf256_poly gf256_add(
    gf256_poly first,
    gf256_poly second);

int oldest_bit_idx(
    unsigned short value);

gf256_poly gf256_mul(
    gf256_poly first,
    gf256_poly second,
    gf256_modulo modulo);

gf256_poly gf256_pow(
    gf256_poly value,
    unsigned short degree,
    gf256_modulo modulo);

gf256_poly gf256_inv(
    gf256_poly value,
    gf256_modulo modulo);

int gf256_irreducible_modulos(
    gf256_modulo **results_target,
    size_t *results_count_target);

int main()
{
    gf256_modulo const mod = 283 - 256;
    gf256_poly const value = 183;

    gf256_poly mul = gf256_mul(value, 77, mod);
    printf("%u * %u == %u\n\n", value, 77, mul);

    gf256_poly inv_value = gf256_inv(value, mod);
    printf("%u^-1 == %u\n", value, inv_value);
    printf("%u * %u^-1 == %u\n", value, value, gf256_mul(value, inv_value, mod));

    return 0;
}

gf256_poly gf256_add(
    gf256_poly first,
    gf256_poly second)
{
    return (gf256_poly)(first ^ second);
}

int oldest_bit_idx(
    unsigned short value)
{
    int result = -1;

    while (value)
    {
        result++;
        value >>= 1;
    }

    return result;
}

gf256_poly gf256_mul(
    gf256_poly first,
    gf256_poly second,
    gf256_modulo modulo)
{
    gf256_poly second_copy = second;
    unsigned short result = 0;
    unsigned short const modulo_x8 = (unsigned short)modulo + 256;
    int i = 0, idx;

    while (second != 0)
    {
        if (second & 1)
        {
            result ^= (first << i);
        }

        second >>= 1;
        i++;
    }

    // printf("%u * %u == %u", first, second_copy, result);

    while ((idx = oldest_bit_idx(result)) >= 8)
    {
        result ^= (modulo_x8 << (idx - 8));
    }

    return (gf256_poly)result;
}

gf256_poly gf256_pow(
    gf256_poly value,
    unsigned short degree,
    gf256_modulo modulo)
{
    gf256_poly result = 1;
    int obi = oldest_bit_idx(degree), i;
    
    for (i = obi; i >= 0; --i)
    {
        result = gf256_mul(result, result, modulo);

        if ((degree >> i) & 1)
        {
            result = gf256_mul(result, value, modulo);
        }
    }

    return result;
}

gf256_poly gf256_inv(
    gf256_poly value,
    gf256_modulo modulo)
{
    return gf256_pow(value, 254, modulo);
}

int gf256_irreducible_modulos(
    gf256_modulo **results_target,
    size_t *results_count_target)
{
    // TODO: You can do it!

    return 67;
}