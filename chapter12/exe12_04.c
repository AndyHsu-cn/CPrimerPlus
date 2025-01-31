/*	exe12_04.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write and test in a loop a function that returns the number of times it has been called.
 */
#include <stdio.h>
int call_times(void)
{
    static int count = 0;

    ++count;

    return count;
}

int main(void)
{
    int ind;

    for(ind = 0; ind < 100; ind++)
        printf("call_times is called %d times.\n", call_times());

    return 0;
}