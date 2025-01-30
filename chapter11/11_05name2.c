/*	11_05name2.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  reads a name 
 */
#include <stdio.h>
#define MAX     81
int main(void)
{
    char name[MAX];
    char * ptr;

    printf("Hi, what's your name?\n");
    // gets() will cause Segmentation fault in gcc11.4
    // so try gcc file.c -std=c89 to use gets()
    ptr = gets(name);
    printf("%s? Ah! %s!\n", ptr, name);

    return 0;
}