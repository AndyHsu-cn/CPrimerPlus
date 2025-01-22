/*	exe08_06.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Modify the get_first() function of Listing 8.8 so that it returns the first nonwhitespace
 *  character encountered. Test it in a simple program.
 */
#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
    char ch;

    ch = get_first();
    printf("The first letter is %c, ascii code is %d.\n", ch, ch);

    return 0;
}

char get_first(void)
{
    char ch;

    while(isspace(ch = getchar()))
        continue;
    while(getchar() != '\n')
        continue;

    return ch;
}