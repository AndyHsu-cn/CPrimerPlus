/*	06_04while2.c
 *  2025-01-10
 *  modified by Andy Hsu
 * 
 *  watch your semicolons
 */
#include <stdio.h>
int main(void)
{
    int n = 0;

    // The loop ends next line because there is a semicolon
    while(n++ < 3);
        printf("n is %d\n", n);
    printf("That's all this program does.\n");

    return 0;
}