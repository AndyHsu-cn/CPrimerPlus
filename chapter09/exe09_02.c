/*	exe09_02.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  Devise a function chline(ch,i,j) that prints the requested character in columns
 *  i through j. Test it in a simple driver.
 */
#include <stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
    int i = 4, j = 7;
    char ch = '#';

    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    int ind;

    while(i > j)
    {
        printf("chline(ch, col_1, col_2), col_1 must be no more than col_2.\n");
        printf("Try again: ");
        scanf("%d %d", &i, &j);
    }
    for(ind = 1; ind <= j; ind++)
        if(ind < i)
            putchar(' ');
        else
            putchar(ch);
    putchar('\n');
}