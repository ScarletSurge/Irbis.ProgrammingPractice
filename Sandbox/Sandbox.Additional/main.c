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


int main(
    void)
{
    //int i = 0;
    //printf("%zu\n", sizeof(i++));
    //printf("i == %d", i);

    //return 0;
    return additional_261024();
    return additional_261031();

    return 0;
}