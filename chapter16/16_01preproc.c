/*	16_01preproc.c
 *  2025-02-05
 *  modified by Andy Hsu
 * 
 *  simple preprocessor examples 
 */
#include <stdio.h>
#define TWO     2
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde"
#define FOUR    TWO*TWO
#define PX      printf("x is %d.\n", x);
#define FMT     "x is %d.\n"
int main(void)
{
    int x = TWO;

    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");

    return 0;
}