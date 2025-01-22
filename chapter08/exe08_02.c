/*	exe08_02.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input as a stream of characters until encountering
 *  EOF. Have the program print each input character and its ASCII decimal value.
 *  Note that characters preceding the space character in the ASCII sequence are
 *  nonprinting characters. Treat them specially. If the nonprinting character is a
 *  newline or tab, print \n or \t, respectively. Otherwise, use control-character
 *  notation. For instance, ASCII 1 is Ctrl+A, which can be displayed as ^A. Note that
 *  the ASCII value for A is the value for Ctrl+A plus 64. A similar relation holds for
 *  the other nonprinting characters. Print 10 pairs per line, except start a fresh line
 *  each time a newline character is encountered.
 */
#include <stdio.h>
#define SPACE ' '
int main(void)
{
    int ch;
    int cnt = 0;

    while((ch = getchar()) != EOF)
    {
        if(ch >= SPACE)
            printf("%c-%d\t ", ch, ch);
        else{
            if(ch == '\n')
            {
                printf("%s-%d\t ", "\\n", ch);
                printf("\n");
                cnt = 0;
                continue;
            }else if(ch == '\t')
                printf("%s-%d\t ", "\\t", ch);
            else
                printf("^%c-%d\t ", ch + 64, ch);
        }
        if(++cnt%10 == 0)
            putchar('\n');
    }
    printf("Bye.\n");

    return 0;
}