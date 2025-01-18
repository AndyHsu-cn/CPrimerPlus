/*	exe06_04.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Have a program request the user to enter an uppercase letter. Use nested loops
 *  to produce a pyramid pattern like this:

        A
       ABA
      ABCBA
     ABCDCDA
    ABCDEDCBA
    
 *  The pattern should extend to the character entered. For example, the preceding
 *  pattern would result from an input value of E. Hint: Use an outer loop to handle
 *  the rows. Use three inner loops in a row, one to handle the spaces, one for
 *  printing letters in ascending order, and one for printing letters in descending
 *  order. If your system doesn't use ASCII or a similar system that represents letters
 *  in strict number order, see the suggestion in programming exercise 3.
 */
#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char letter;
    int rows, cols;

    printf("Enter an uppercase letter: ");
    scanf("%c", &letter);
    for(rows = 1; rows <= letter - 'A' + 1; rows++)
    {
        for(cols = rows; cols < letter - 'A' + 1; cols++)
            printf("%c", SPACE);
        for(cols = 1; cols <= rows; cols++)
            printf("%c", 'A' + cols - 1);
        for(cols -= 2; cols >= 1; cols--)
            printf("%c", 'A' + cols - 1);
        printf("\n");
    }

    return 0;
}