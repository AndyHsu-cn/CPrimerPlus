/*	12_08r_drive0.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  various storage classes produces random numbers uses ANSI C portable algorithm
 *  complie with 12_07rand0.c
 */
#include <stdio.h>
int rand0(void);
int main(void)
{
    int count;

    for(count = 0; count < 5; count++)
        printf("%hd\n", rand0());

    return 0;
}