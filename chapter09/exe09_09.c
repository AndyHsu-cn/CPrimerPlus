/*	exe09_09.c
 *  2025-01-24
 *  modified by Andy Hsu
 * 
 *  Generalize the to_binary() function of 09_08binary.c to a to_base_n() function that
 *  takes a second argument in the range 2–10. It then should print the number that
 *  is its first argument to the number base given by the second argument. For
 *  example, to_base_n(129,8) would display 201, the base-8 equivalent of 129.
 *  Test the function in a complete program.
 */
#include <stdio.h>
// void to_binary(unsigned long n);
void to_base_n(unsigned long n, int base);
int main(void)
{
    unsigned long number;
    int base;

    printf("Enter two integers (q to quit):\n");
    while(scanf("%lu %d", &number, &base) == 2)
    {
        if(base<2 || base>10)
        {
            printf("Base should be between 2 and 10, try again\n");
            continue;
        }
        printf("Binary equivalent: ");
        //to_binary(number);
        to_base_n(number, base);
        putchar('\n');
        printf("Enter two integers (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

#if 0
void to_binary(unsigned long n)
{
    int r;

    r = n % 2;
    if(n >= 2)
        to_binary(n/2);
    #if 0
    printf("%d", r);
    #endif
    putchar('0' + r);  
}
#endif

void to_base_n(unsigned long n, int base)
{
    int r;

    r = n % base;
    if(n >= base)
        to_base_n(n/base, base);
    putchar('0' + r);  
}