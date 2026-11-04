#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996)

typedef int (*comparer)(int, int);

typedef char (*converter)(size_t, size_t);

char *from_10_converter(size_t value, size_t target_base)
{
    char *result;
    size_t result_digits_count, value_copied, rem;

    if (value == 0)
    {
        if ((result = (char *)malloc(sizeof(char) * 2)) != NULL)
        {
            strcpy(result, "0");
        }
        return result;
    }

    result_digits_count = 0;
    value_copied = value;
    while (value_copied)
    {
        value_copied /= target_base;
        ++result_digits_count;
    }

    if ((result = (char *)malloc(sizeof(char) * (result_digits_count + 1))) != NULL)
    {
        result[result_digits_count] = '\0';
        while (result_digits_count--)
        {
            result[result_digits_count] = ((rem = value % target_base) < 10 ? rem + '0' : rem + 'A' - 10);

            value /= target_base;
        }
    }
    return result;
}

int main() {
    char *converted;
    // some other shit
    if ((converted = from_10_converter(12345, 2)) == NULL)
    {
        // память не выделилась, всё плохо
    }

    printf("12345(10) == %s(2)\n", converted);

    free(converted); // это нельзя забыть - память чистим за собой
    return 0;
}