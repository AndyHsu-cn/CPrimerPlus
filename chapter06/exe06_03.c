/*	exe06_03.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Use nested loops to produce the following pattern:
    
    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA

 *  Note: If your system doesn't use ASCII or some other code that encodes letters in
 *  numeric order, you can use the following to initialize a character array to the
 *  letters of the alphabet:
 *  char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 *  Then you can use the array index to select individual letters; for example,
 *  lets[0] is 'A', and so on.
 */
#include <stdio.h>
int main(void)
{
    const char BEGIN_LETTER = 'F';
    int rows, cols;

    for(rows = 1; rows <= 6; rows++)
    {
        for(cols = 1; cols <= rows; cols++)
            printf("%c", BEGIN_LETTER - cols + 1);
        printf("\n");
    }

    return 0;
}