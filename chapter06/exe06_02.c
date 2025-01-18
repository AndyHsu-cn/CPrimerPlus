/*	exe06_02.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Use nested loops to produce the following pattern:
    
    $
    $$
    $$$
    $$$$
    $$$$$
 
 */
#include <stdio.h>
#define ROWS 5
int main(void)
{
    int rows, num;

    for(rows = 1; rows <= ROWS; rows++)
    {
        for(num = 1; num <= rows; num++)
            printf("$");
        printf("\n");
    }

    return 0;
}