/*	exe09_06.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  Write a program that reads characters from the standard input to end-of-file. For
 *  each character, have the program report whether it is a letter. If it is a letter, also
 *  report its numerical location in the alphabet. For example, c and C would both be
 *  letter 3. Incorporate a function that takes a character as an argument and returns
 *  the numerical location if the character is a letter and that returns –1 otherwise.
 */
#include <stdio.h>
#include <ctype.h>
int loc_alpha(char ch);
int main(void)
{
    int ch;

    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            continue;
        if(loc_alpha(ch) != -1)
            printf("%c is a letter, the nurmerical location is %d\n", ch, loc_alpha(ch));
        else
            printf("%c is not a letter.\n", ch);
    }
    printf("Bye.\n");

    return 0;
}

int loc_alpha(char ch)
{
    int pos = -1;

    if(isalpha(ch))
        pos = tolower(ch) - 'a' + 1;

    return pos;
}