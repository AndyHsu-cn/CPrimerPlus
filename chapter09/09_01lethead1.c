/*	09_01lethead1.c
 *  2025-01-22
 *  modified by Andy Hsu
 * 
 *  create a function that types 40 asterisks in a row
 */
#include <stdio.h>
#define NAME        "GIGATHINK, INC."
#define ADDRESS     "101 Megabuck Plaza"
#define PLACE       "Megapolis, CA 94904"
#define WIDTH       40
void starbar(void);
int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}

void starbar(void)
{
    int count;

    for(count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}