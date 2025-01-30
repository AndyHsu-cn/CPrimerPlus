/*	exe11_03.c
 *  2025-01-28
 *  modified by Andy Hsu
 * 
 *  Design and test a function that reads the first word from a line of input into an
 *  array and discards the rest of the line. Define a word as a sequence of characters
 *  with no blanks, tabs, or newlines in it.
 */
#include <stdio.h>
#include <ctype.h>
#define MAX 80
char * get_word(char word[]);
int main(void)
{
    char word[MAX + 1];

    printf("Enter some characters: ");
    get_word(word);
    puts(word);

    return 0;
}

char * get_word(char word[])
{
    int ind = 0;
    int ch;

    while(ind < MAX && !isspace((ch = getchar())))
    {
        word[ind] = ch;
        ind++;
    }
    word[ind] = '\0';
    if(ch != '\n')
        while(getchar() != '\n')
            continue;

    return word;
}