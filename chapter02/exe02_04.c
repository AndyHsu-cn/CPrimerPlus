/*	exe02_04.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  Write a program that produces the following output:

    For he's a jolly good fellow!
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    Which nobody can deny!

 *  Have the program use two user-defined functions in addition to main(): one that
 *  prints the "jolly good" message once, and one that prints the final line once.
 */
#include <stdio.h>
void jolly(void);
void no_deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();
    no_deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void no_deny(void)
{
    printf("Which nobody can deny!\n");
}