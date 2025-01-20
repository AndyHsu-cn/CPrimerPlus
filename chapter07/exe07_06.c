/*	exe07_06.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input up to # and reports the number of times that
 *  the sequence ei occurs.
 */
#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch_cur, ch_prev;
    int times = 0;

    ch_prev = '\0';
    while((ch_cur = getchar()) != STOP)
    {
        if(ch_cur == 'i')
            if(ch_prev == 'e')
                times++;
        ch_prev = ch_cur;
    }
    printf("sequence \"ei\" occurs %d times.\n", times);

    return 0;
}