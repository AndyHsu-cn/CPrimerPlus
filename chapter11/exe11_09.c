/*	exe11_09.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a function that takes a string as an argument and removes the spaces from
 *  the string. Test it in a program that uses a loop to read lines until you enter an
 *  empty line. The program should apply the function to each input string and
 *  display the result.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SPACE       ' '
#define MAX         80
void rm_space(char * str);
int main(void)
{
    char arr[MAX];

    printf("Enter a line (empty line to quit): ");
    while(gets(arr) && arr[0] != '\0')
    {
        printf("Original string: %s\n", arr);
        rm_space(arr);
        printf("After remove the spaces: %s\n", arr);
        printf("Enter next line (empty line to quit): ");
    }
    printf("Bye!\n");

    return 0;
}

void rm_space(char * str)
{
    char * find;

    while(*str)
    {
        if(*str == SPACE)
        {
            find = str;
            while(*find) 
            {
                *find = *(find+1);
                find++;
            }
        }
        str++;
    }
}