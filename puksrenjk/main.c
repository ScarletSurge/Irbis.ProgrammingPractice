#include <stdio.h>
int main(
    int argc,
    char *argv[],
    char *env[])
{
    /*
    
    
    хихихихи =) 
    
    */
    // printf("Hello, world!!1!1");
    
    // "\n" // "\r\v"

    // printf("%d", 'a');

    // %d %u %c %s %f %lf %g %o %x %X
    //printf("12 %% 13 = %s", "puk puk :)");

    //printf("%s hihih   %s", "abcde", "abcdef");

    float f = (float)-117.37;
    int f1 = f; // floor, round, trunc, ceil 
    //printf("%X", (int *)&f);
    
    printf("%f\n", *&f);
    printf("%08X\n", *(int *)&f);

    double d = -117.37;
    int *p = (int *)&d + 1;

    printf("%08X%08X\n\n", *p, *(p - 1));

    int i = 10;
    printf("%d %d %d", i++, ++i, ++i);

    printf("\n\n\n%s", (NULL == NULL ? "equal" : "not equal"));

    return 0;
}