/*	06_10sweetie1.c
 *  2025-01-14
 *  modified by Andy Hsu
 * 
 *  a counting loop
 */
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count = 1;

    while(count <= NUMBER)
    {
        printf("Be my Valentine!\n");
        count++;
    }

    return 0;
}