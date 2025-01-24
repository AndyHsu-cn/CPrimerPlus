/*	09_06recur.c
 *  2025-01-22
 *  modified by Andy Hsu
 * 
 *  recursion illustration 
 */
#include <stdio.h>
void up_and_down(int n);
int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if(n < 4)
        up_and_down(n + 1);
    printf("LEVEL %d: n location %p\n", n, &n);
}