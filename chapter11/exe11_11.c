/*	exe11_11.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input up to EOF and reports the number of words, the
 *  number of uppercase letters, the number of lowercase letters, the number of
 *  punctuation characters, and the number of digits. Use the ctype.h family of
 *  functions.
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main(void)
{
    int word_cnt = 0, upper_cnt = 0, lower_cnt = 0, punct_cnt = 0, digit_cnt = 0;
    int ch;
    bool inword = false;

    while((ch = getchar()) != EOF)
    {
        if(isupper(ch))
            upper_cnt++;
        if(islower(ch))
            lower_cnt++;
        if(ispunct(ch))
            punct_cnt++;
        if(isdigit(ch))
            digit_cnt++;
        if(!isspace(ch) && !inword)
        {
            inword = true;
            word_cnt++;
        }
        if(isspace(ch) && inword)
            inword = false;
    }
    printf("the number of words: %d\nthe number of uppercase letters: %d\n"
           "the number of lowercase letters: %d\nthe number of punctuation characters: %d\n"
           "and the number of digits: %d\n", word_cnt, upper_cnt, lower_cnt, punct_cnt, digit_cnt);

    return 0;
}