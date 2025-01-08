/*	05_15pound.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  defines a function with an argument
 */
#include <stdio.h>
void pound(int n);
int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;

    pound(times);
    pound(ch);
    pound((int) f);

    return 0;
}

void pound(int n)
{
    while(n-- > 0)
        printf("#");
    printf("\n");
}