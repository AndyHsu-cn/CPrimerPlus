/*	exe09_03.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  Write a function that takes three arguments: a character and two integers. The
 *  character is to be printed. The first integer specifies the number of times that the
 *  character is to be printed on a line, and the second integer specifies the number
 *  of lines that are to be printed. Write a program that makes use of this function.
 */
#include <stdio.h>
void print_ch_cXr(char ch, int cols, int rows);
int main(void)
{
    char ch = '$';
    int cols = 5, rows = 10;

    print_ch_cXr(ch, cols, rows);

    return 0;
}

void print_ch_cXr(char ch, int cols, int rows)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            putchar(ch);
        putchar('\n');
    }
}