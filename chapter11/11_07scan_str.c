/*	11_07scan_str.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  using scanf()
 */
#include <stdio.h>
int main(void)
{
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read %d names %s and %s.\n", count, name1, name2);

    return 0;
}