/*	06_11sweetie2.c
 *  2025-01-14
 *  modified by Andy Hsu
 * 
 *  a counting loop using for
 */
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count;

    for(count = 1; count <= NUMBER; count++)
        printf("Be my Valentine!\n");

    return 0;
}