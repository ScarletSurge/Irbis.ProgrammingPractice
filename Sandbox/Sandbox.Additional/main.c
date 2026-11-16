#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996)

unsigned long long factorial(
    unsigned int value)
{
    int variable = 0;
    //variable = 30;
    //printf("%d", variable);
    // ...
    //variable = 10;

    if (variable = 0)
    {
        printf("true");
    }

    //if (conditional_expression_1)
    //{
    //    // 
    //}
    //else if (conditional_expression_2)
    //{
    //    // 
    //}
    //// ...
    //else
    //{
    //
    //}

    // TODO: switch

    // counter loop
    // for (counter init; loop condition check; counter modification)
    int i = 10;
    for (i = 0; i < 10; ++i)
    {
        // expressions sequence
    }
    printf("%d", i);

    while (++i)
    {

    }
}

int additional_261024(
    void)
{
    factorial(67);

    //((void (*)(int, char const *, char))5) (1, "123", 'c');
}

int foo(
    int *y)
{
    y[52] = 7; // *(y + 52) = 7;
    printf("&y == 0x%p\n", y);
    *y = 67;
    //pow(2, 3);
}

#include <malloc.h>
#include <stdlib.h>

int arrays_demo(
    int **return_value_target,
    size_t *return_value_size_target,
    int **return_value_target2,
    size_t *return_value_size_target2)
{
    // size_t const size = 15;
    // *((int *)&size) = 10;
    // printf("size == %zu\n\n", size);
    long long int x;
    x = &x;
    printf("before: x == %ld\n", x);
    scanf("%ld", x);
    printf("after: x == %ld\n\n", x);
    int arr[30];
    arr[20] = 10; // ptr + shift, ptr - shift, ptr2 - ptr1
    // *(arr + 3)
    3[arr] = 10;

    // sizeof(expression_or_type)

    int *mallocated_array = (int *)malloc(sizeof(int) * 2);
    if (mallocated_array == NULL) // память не выделилась
    {
        // printf("всё очень плоха(99(9");
        return 1;
    }
    *return_value_target = mallocated_array;
    *return_value_size_target = 2;

    int *callocated_array = (int *)calloc(3, sizeof(int)); // malloc+memset
    if (callocated_array == NULL) // память не выделилась
    {
        // TODO: handle allocation error
        //free(mallocated_array);
        return 2;
    }
    *return_value_target2 = callocated_array;
    *return_value_size_target2 = 3;

    return 0;
}
//O(n*m) -> O(n^(log_2(3)))
// 1..n

typedef int T;

int additional_261031(
    void)
{
    int *array1, *array2;
    size_t array1_size, array2_size;
    switch (arrays_demo(&array1, &array1_size, &array2, &array2_size))
    {
    case 0:

        break;
    case 1:
        printf("((9(9");
        break;
    }

    T value;
    T *value_address = &value; // T*
    T **value_address_address = &value_address;// (T*)*

    //value_address_address

    int x = 10;
    //printf("%d", x);
    //scanf("%d", &x);

    //x = &x;
    printf("&x == 0x%p\n", &x);
    // (T)value - type conversion
    //foo((int *)x); // foo(10)
    printf("before: %d\n", x);

    foo(&x); // foo(0x1234567890

    printf("after: %d SIXSEVEN", x);

    return 0;
}

// foo_demo: int -> void
void foo_demo(
    int param)
{
    printf("void func_demo() called: param == %d", param);
}

// bar_demo: int -> void
void bar_demo(
    int param)
{
    printf("void bar_demo() called: param == %d", param);
}

typedef struct prime_with_degree
{
    unsigned int prime;
    unsigned int degree;
} prime_with_degree/*, *p1_, **p2_*/;

// int foo(
//     T *x)
// {
//     *x = 10;
// }
// 
// int main1() { T x1 = 20; foo(&x1); }

// sieve: Eratosphene, Sundaram, Atkin | Brun, Selberg | big

//    02 03    05    07     
// 11    13          17    19   
//       23                29   
// 31                37       
// 41    43          47       
//       53                59   
// 61                67       
// 71    73                79   
//       83                89   
//                   97       

// 02 03 05 07 11 13 17 19 23 29
// 2: +2
// 2, 3: +2/+4 OUR BRUH WNAGEEEEEEEEE
// 2, 3, 5: +2/+4//TODO

int decompose_by_degrees_of_primes(
    unsigned int value,
    prime_with_degree **result,
    size_t *result_length)
{
    static unsigned int *primes = NULL;
    static size_t primes_capacity = 50;
    static size_t primes_size = 25;

    prime_with_degree *decomposition;
    prime_with_degree *decomposition_current_component;
    prime_with_degree *for_realloc;
    size_t decomposition_capacity = 4;
    unsigned int *prime;
    unsigned int degree;

    if (value == 0)
    {
        return 1;
    }

    if (result == NULL)
    {
        return 2;
    }

    if (result_length == NULL)
    {
        return 3;
    }

    if (primes == NULL)
    {
        if ((primes = (unsigned int *)malloc(sizeof(unsigned int) * primes_capacity)) == NULL)
        {
            return 4;
        }

        primes[0] = 2;
        primes[1] = 3;
        primes[2] = 5;
        primes[3] = 7;
        primes[4] = 11;
        primes[5] = 13;
        primes[6] = 17;
        primes[7] = 19;
        primes[8] = 23;
        primes[9] = 29;
        primes[10] = 31;
        primes[11] = 37;
        primes[12] = 41;
        primes[13] = 43;
        primes[14] = 47;
        primes[15] = 53;
        primes[16] = 59;
        primes[17] = 61;
        primes[18] = 67;
        primes[19] = 71;
        primes[20] = 73;
        primes[21] = 79;
        primes[22] = 83;
        primes[23] = 89;
        primes[24] = 97;
    }

    if ((decomposition = (prime_with_degree *)malloc(sizeof(prime_with_degree) * decomposition_capacity)) == NULL)
    {
        return 5;
    }

    prime_with_degree *obj;
    // (*obj).degree = 10; - не канон, но так можно если очень хочется
    // obj->degree = 10; - канон

    decomposition_current_component = decomposition;

    prime = primes - 1;

    do
    {
        ++prime;
        degree = 0;

        while (value % *prime == 0)
        {
            ++degree;

            if (decomposition_current_component - decomposition == decomposition_capacity)
            {
                if ((for_realloc = (prime_with_degree *)realloc(decomposition, sizeof(prime_with_degree) * decomposition_capacity * 2)) == NULL)
                {
                    free(decomposition);

                    return 6;
                }

                decomposition = for_realloc;
                for_realloc = NULL;
                decomposition_current_component = decomposition + decomposition_capacity;
                decomposition_capacity *= 2;
            }

            value /= *prime;
        }

        if (degree == 0)
        {
            continue;
        }

        decomposition_current_component->degree = degree;
        decomposition_current_component->prime = *prime;
        ++decomposition_current_component;

        if (value == 1)
        {
            if (decomposition_current_component - decomposition != decomposition_capacity)
            {
                if ((for_realloc = (prime_with_degree *)realloc(decomposition, sizeof(prime_with_degree) * (decomposition_current_component - decomposition))) == NULL)
                {
                    free(decomposition); // TODO: maybe this is not necessary

                    return 7;
                }

                decomposition_capacity = decomposition_current_component - decomposition;
                decomposition = for_realloc;
                decomposition_current_component = decomposition + decomposition_capacity;
                for_realloc = NULL;
            }

            *result = decomposition;
            *result_length = decomposition_current_component - decomposition;

            return 0;
        }
    } while (prime - primes < primes_size - 1);

    return 0;
}

int multiplicative_function(
    unsigned int n,
    double (*arithmetic_multiplicative_function_on_prime_degree)(unsigned int, unsigned int),
    double *result)
{
    prime_with_degree *decomposition_of_n;
    size_t nu_n;
    size_t j;

    if (n == 0)
    {
        return 1;
    }

    if (result == NULL)
    {
        return 2;
    }

    *result = 1.0;

    decompose_by_degrees_of_primes(n, &decomposition_of_n, &nu_n);

    for (j = 0; j < nu_n; ++j)
    {
        *result *= arithmetic_multiplicative_function_on_prime_degree(decomposition_of_n[j].prime, decomposition_of_n[j].degree);
    }

    free(decomposition_of_n);

    return 0;
}

double Mobius(
    unsigned int prime,
    unsigned int degree)
{
    if (degree == 0)
    {
        return 1;
    }

    if (degree == 1)
    {
        return -1;
    }

    return 0;
}

double Euler(
    unsigned int prime,
    unsigned int degree)
{
    if (degree == 0)
    {
        return 1;
    }

    return pow(prime, degree) - pow(prime, degree - 1);
}

double divisors_count(
    unsigned int prime,
    unsigned int degree)
{
    return degree + 1;
}

int additional_261114(
    void (*callback_function)(int))
{
    //printf("%zu %zu\n\n", sizeof(int), sizeof(int *));
    // float f = 123.75; // IEEE-754
    // size_t p = (size_t)&f;
    // printf("%08X", *(int *)p);
    // 
    // void *p1 = (void *)&f;

    int n;
    size_t j;
    prime_with_degree *decomposition;
    size_t nu_n;
    double res;

    for (n = 2; n <= 100; ++n)
    {
        //switch (decompose_by_degrees_of_primes((unsigned int)n, &decomposition, &nu_n))
        // {
        // case 0:
        //     printf("%d == ", n);
        //     for (j = 0; j < nu_n; ++j)
        //     {
        //         printf("(%u^%u)", decomposition[j].prime, (// decomposition + j)->degree);
        //         if (j != nu_n - 1)
        //         {
        //             printf(" * ");
        //         }
        //     }
        //     printf("\n");
        //     free(decomposition);
        //     decomposition = NULL;
        //     break;
        // default:
        // 
        //     break;
        // }
        switch (multiplicative_function(n, divisors_count, &res))
        {
        case 0:
            printf("tau(%d) == %lf\n", n, res);
            break;
        default:

            break;
        }
    }

    return 0;
}

int main(
    void)
{
    // return additional_261024();
    // return additional_261031();
    // return additional_261114(bar_demo);
    return additional_261114(bar_demo);

    return 0;
}