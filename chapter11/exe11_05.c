/*	exe11_05.c
 *  2025-01-29
 *  modified by Andy Hsu
 * 
 *  Write a function called is_within() that takes a character and a string pointer as
 *  its two function parameters. Have the function return a nonzero value (true) if the
 *  character is in the string and zero (false) otherwise. Test the function in a
 *  complete program that uses a loop to provide input values for feeding to the
 *  function.
 */
#include <stdio.h>
#include <stdbool.h>
#define MAX 80
bool is_within(char c, const char * str);
int main(void)
{
    char str[MAX];
    char ch;

    puts("Enter a string (empty line to quit):");
    while(gets(str) && str[0] != '\0')
    {
        printf("Enter a character (EOF to quit): ");
        scanf("%c", &ch);
        if(is_within(ch, str))
            printf("%c is with in %s\n", ch, str);
        else
            printf("%c is not with in %s\n", ch, str);
        puts("Enter next string (empty line to quit):");
        while(getchar() != '\n')
            continue;
    }
    printf("Bye!\n");

    return 0;
}

bool is_within(char c, const char * str)
{
    bool flag = false;

    while(*str && *str != c)
        str++;
    if(*str)
        flag = true;

    return flag;
}