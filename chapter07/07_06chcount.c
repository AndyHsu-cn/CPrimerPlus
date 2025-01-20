/*	07_06chcount.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *   use the logical AND operator to count how many times the characters
 *   other than single or double quotes appear in an input sentence
 */
#include <stdio.h>
#define PERIOD '.'
int main(void)
{
    int ch;
    int char_count = 0;

    while((ch = getchar()) != PERIOD)
    {
        if(ch!='"' && ch!='\'')
            char_count++;
    }
    printf("There are %d non-quote characters.\n", char_count);

    return 0;
}