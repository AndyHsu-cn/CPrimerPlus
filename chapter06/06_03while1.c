/*	06_03while1.c
 *  2025-01-10
 *  modified by Andy Hsu
 * 
 *  watch your braces
 *  bad coding creates an infinite loop
 */
#include <stdio.h>
int main(void)
{
    int n = 0;

    while(n < 3)
        printf("n is %d\n", n);
        n++;
    printf("That's all this program does\n");

    return 0;
}