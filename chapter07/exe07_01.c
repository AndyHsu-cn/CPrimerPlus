/*	exe07_01.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input until encountering the # character and then
 *  reports the number of spaces read, the number of newline characters read, and
 *  the number of all other characters read.
 */
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int n_spaces, n_newlines, n_others;

    n_spaces = n_newlines = n_others = 0;
    printf("Please enter a string: ");
    while((ch = getchar()) != STOP)
    {
        if(ch == ' ')
            n_spaces++;
        else if(ch == '\n')
            n_newlines++;
        else
            n_others++;
    }
    printf("spaces %d, newline %d, all other characters %d\n", n_spaces,
                n_newlines, n_others);

    return 0;
}