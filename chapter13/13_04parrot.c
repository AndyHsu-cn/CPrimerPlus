/*	13_04parrot.c
 *  2025-01-31
 *  modified by Andy Hsu
 * 
 *  using fgets() and fputs()
 */
#include <stdio.h>
#define MAXLINE     20
int main(void)
{
    char line[MAXLINE];

    while(fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
        fputs(line, stdout);

    return 0;
}