/*	exe08_04.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input as a stream of characters until encountering
 *  EOF. Have it report the average number of letters per word. Don't count
 *  whitespace as being letters in a word. Actually, punctuation shouldn't be counted
 *  either, but don't worry about that now. (If you do want to worry about it, consider
 *  using the ispunct() function from the ctype.h family.)
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main(void)
{
    int ch;
    int tot_letters = 0, tot_word = 0;
    bool inword = false;

    while((ch = getchar()) != EOF)
    {
        if(!isspace(ch) && !ispunct(ch))
        {
            tot_letters++;
            if(!inword)
            {
                inword = true;
                tot_word++;
            }
        }
        if((isspace(ch) || ispunct(ch)) && inword)
            inword = false;
    }
    printf("total letters = %d, total word = %d.\n", tot_letters, tot_word);
    printf("average number of letters per word: %.2f\n", 1.0 * tot_letters / tot_word);

    return 0;
}