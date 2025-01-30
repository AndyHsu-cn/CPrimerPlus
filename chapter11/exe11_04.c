/*	exe11_04.c
 *  2025-01-28
 *  modified by Andy Hsu
 * 
 *  Design and test a function that searches the string specified by the first function
 *  parameter for the first occurrence of a character specified by the second function
 *  parameter. Have the function return a pointer to the character if successful, and a
 *  null if the character is not found in the string. (This duplicates the way that the
 *  library strchr() function works.) Test the function in a complete program that
 *  uses a loop to provide input values for feeding to the function.
 */
#include <stdio.h>
#include <ctype.h>
#define MAX     80
char * str_chr(char arr[], int ch);
int main(void)
{
    char line[MAX + 1];
    char ch;
    

    printf("Enter a string (empty line to quit): ");
    while(gets(line) && line[0] != '\0'){
        printf("which character you want to find: ");
        scanf("%c", &ch);
        while(getchar() != '\n')
            ;
        printf("Find %s\n", str_chr(line, ch));
        printf("Enter a string (empty line to quit): ");
    }
    printf("Bye!\n");

    return 0;
} 

char * str_chr(char arr[], int ch)
{
    char * find = NULL;

    while(*arr && *arr != ch)
        arr++;
    if(*arr != '\0')
        find = arr;

    return find;
}