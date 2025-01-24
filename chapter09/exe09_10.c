/*	exe09_10.c
 *  2025-01-24
 *  modified by Andy Hsu
 * 
 *  Write and test a Fibonacci() function that uses a loop instead of recursion to
 *  calculate Fibonacci numbers.
 */
#include <stdio.h>
int Fibonacci(int pos);
int main(void)
{
    int pos = 7;

    printf("Fibonacci(%d) is %d.\n", pos, Fibonacci(pos));

    return 0;
}

int Fibonacci(int pos)
{
    int a = 1, b = 1, c = 1;

    if(pos > 2)
    {
        for(int ind = 3; ind <= pos; ind++)
        {
            c = a+b;
            a = b;
            b = c;
        }
    }

    return c;
}