/*	exe11_15.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a program that reads input until end-of-file and echoes it to the display.
 *  Have the program recognize and implement the following command-line arguments.
 *  -p Print input as is
 *  -u Map input to all uppercase
 *  -l Map input to all lowercase 
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char ch;

    while((ch = getchar()) != EOF)
    {
        if(strcmp(argv[1], "-p") == 0)
            putchar(ch);
        else if(strcmp(argv[1], "-u") == 0)
            putchar(toupper(ch));
        else if(strcmp(argv[1], "-l") == 0)
            putchar(tolower(ch));
    }
    printf("Bye!\n");

    return 0;
}