/*	11_15join_chk.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  joins two strings, check size first
 */
#include <stdio.h>
#include <string.h>
#define SIZE    30
#define BUGSIZE 13
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    gets(flower);
    if((strlen(addon) + strlen(flower) + 1) <= SIZE)
        strcat(flower, addon);
    puts(flower);
    puts("What is your favourite bug?");
    gets(bug);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);

    return 0;
}