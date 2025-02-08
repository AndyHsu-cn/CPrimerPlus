/*	exe15_03.c
 *  2025-02-08
 *  modified by Andy Hsu
 * 
 *  Write a function that takes an int argument and returns the number of "on" bits
 *  in the argument. Test the function in a program.
 */
#include <stdio.h>
int onbits(int n);
int main(void)
{
    int number;
    
    puts("Enter an integer: ");
    scanf("%d", &number);
    printf("The number of on bits is %d.\n", onbits(number));

    return 0;
}

int onbits(int n)
{
    int digits = 0;
    int i;

    while(n > 0)
    {
        digits += (n & 0x1);
        n >>= 1;
    }

    return digits;
}