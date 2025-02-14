/*	05_12bottles.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  illustrates that computers can be accomplished lyricists.
 */
#include <stdio.h>
#define MAX 100
int main(void)
{
    int count = MAX + 1;

    while(--count > 0)
    {
        printf("%d bottles of spring water on the wall, %d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around.\n");
        printf("%d bottles of spring water!\n", count - 1);
    }

    return 0;
}