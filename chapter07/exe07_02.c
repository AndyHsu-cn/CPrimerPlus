/*	exe07_02.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input until encountering #. Have the program print
 *  each input character and its ASCII decimal code. Print eight character-code pairs
 *  per line. Suggestion: Use a character count and the modulus operator (%) to print
 *  a newline character for every eight cycles of the loop.
 */
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int cnt = 0;

    while((ch = getchar()) != STOP)
    {
        // be careful with the newline, tab and space character
        ++cnt;
        if(ch == '\n')
        {
            printf("%5s-%-3d ", "\\n", ch);
            printf("\n");
            cnt = 0;
        }else if(ch == '\t')
            printf("%5s-%-3d ", "\\t", ch);
        else if(ch == ' ')
            printf("%5s-%-3d ", "space", ch);
        else
            printf("%5c-%-3d ", ch, ch);
        if(cnt % 8 == 0)
            printf("\n");
    }
    printf("Bye.\n");

    return 0;
}