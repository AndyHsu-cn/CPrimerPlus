/*	03_05charcode.c
 *  2024-12-29
 *  modified by Andy Hsu
 * 
 *  displays code number for a character in %d and %c
 */
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);

    return 0;
}