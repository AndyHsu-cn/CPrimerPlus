/*	11_16nogo.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  will this work?
 */
#include <stdio.h>
#define ANSWER "Grant"
int main(void)
{
    char try[40];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    while(try != ANSWER)
    {
        puts("No, that's wrong. try again.");
        gets(try);
    }
    puts("That's right!");

    return 0;
}