/*	exe11_06.c
 *  2025-01-29
 *  modified by Andy Hsu
 * 
 *  The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1,
 *  truncating s2 or padding it with extra null characters as necessary. The target
 *  string may not be null-terminated if the length of s2 is n or more. The function
 *  returns s1. Write your own version of this function. Test the function in a
 *  complete program that uses a loop to provide input values for feeding to the
 *  function.
 */
#include <stdio.h>
#include <string.h>
#define MAX 10
char * my_strncpy(char * dest, const char * src, int n);
int main(void)
{
    char str1[MAX];
    char str2[MAX];
    int n;

    printf("Enter a string for s1 (empty line to quit): ");
    while(gets(str1) && str1[0] != '\0')
    {
        printf("s1 = %s\n", str1);
        puts("Enter a number you want to copy: ");
        scanf("%d", &n);
        while(getchar() != '\n')
            ;
        my_strncpy(str2, str1, n);
        printf("s2 = %s\n", str2);
        printf("Enter next string for s1 (empty line to quit): ");
    }
    printf("Bye!\n");

    return 0;
}

char * my_strncpy(char * dest, const char * src, int n)
{
    int count = 0;

    while(*src != '\0' && count < n)
    {
        *(dest+count) = *(src+count);
        count++;
    }
    dest[count] = '\0';

    return dest;
}