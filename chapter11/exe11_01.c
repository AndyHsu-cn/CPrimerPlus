/*	exe11_01.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  Design and test a function that fetches the next n characters from input (including
 *  blanks, tabs, and newlines), storing the results in an array whose address is
 *  passed as an argument.
 */
#include <stdio.h>
#define MAX     10
char * gets_n(char ar[], int num);
int main(void)
{
    char arr[MAX + 1];

    printf("Fetches the next %d characters from input: ", MAX);
    gets_n(arr, MAX);
    puts(arr);

    return 0;
}

char * gets_n(char ar[], int num)
{
    int count = 0;

    while(count < num)
    {
        ar[count] = getchar();
        count++;
    }
    ar[count] = '\0';
        
    return ar;
}