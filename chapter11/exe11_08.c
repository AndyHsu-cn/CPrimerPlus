/*	exe11_08.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a function that replaces the contents of a string with the string reversed.
 *  Test the function in a complete program that uses a loop to provide input values
 *  for feeding to the function.
 */
#include <stdio.h>
#include <string.h>
#define MAX     80
void reverse_string(char * arr);
int main(void)
{
    char arr[MAX];

    printf("Enter a string (empty line to quit): ");
    while(gets(arr) && arr[0] != '\0')
    {
        reverse_string(arr);
        printf("reversed string: %s\n", arr);
        printf("Enter next string (empty line to quit): ");
    }
    printf("Bye.\n");

    return 0;
}

void reverse_string(char * arr)
{
    int len = strlen(arr);
    char tmp;
    int ind;

    for(ind = 0; ind < len/2; ind++)
    {
        tmp = arr[ind];
        arr[ind] = arr[len-ind-1];
        arr[len-ind-1] = tmp;
    }
}