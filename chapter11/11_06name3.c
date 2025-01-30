/*	11_06name3.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  reads a name using fgets()
 */
#include <stdio.h>
#define MAX     81
int main(void)
{
    char name[MAX];
    char * ptr;

    printf("Hi, what's your name?\n");
    ptr = fgets(name, MAX, stdin);
    printf("%s? Ah! %s!\n", ptr, name);

    return 0;
}