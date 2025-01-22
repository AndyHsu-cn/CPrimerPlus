/*	exe08_03.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input as a stream of characters until encountering
 *  EOF. Have it report the number of uppercase letters and the number of lowercase
 *  letters in the input. You may assume that the numeric values for the lowercase
 *  letters are sequential and assume the same for uppercase. Or, more portably, you
 *  can use appropriate classification functions from the ctype.h library.
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    int cnt_upper = 0, cnt_lower = 0;

    while((ch = getchar()) != EOF)
    {
        if(islower(ch))
            cnt_lower++;
        else if(isupper(ch))
            cnt_upper++;
    }
    printf("number of uppercase letters: %d\n"
           "number of lowercase letters: %d\n", cnt_upper, cnt_lower);

    return 0;
}