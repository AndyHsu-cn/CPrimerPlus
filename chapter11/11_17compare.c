/*	11_17compare.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  this will work
 */
#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define MAX     40
int main(void)
{
    char try[40];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    while(strcmp(try, ANSWER) != 0)
    {
        puts("No, that's wrong. try again.");
        gets(try);
    }
    puts("That's right!");

    return 0;
}