/*	07_05divisores.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  nested ifs display divisors of a number 
 */
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    bool is_Prime;

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while(scanf("%lu", &num) == 1)
    {
        for(div = 2, is_Prime = true; div * div <= num; div++)
        {
            if(num % div == 0)
            {
                is_Prime = false;
                if(div * div != num)
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                else
                    printf("%lu is divisible by %lu.\n", num, div);
            }
        }
        if(is_Prime)
            printf("%lu is a prime.\n", num);
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}