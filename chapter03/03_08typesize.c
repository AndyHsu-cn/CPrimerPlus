/*	03_08typesize.c
 *  2024-12-31
 *  modified by Andy Hsu
 * 
 *  prints out type sizes
 */
#include <stdio.h>
int main(void)
{
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));

    return 0;
}