/*	exe11_14.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Use the character classification functions to prepare an implementation of atoi()
 */
#include <stdio.h>
#include <ctype.h>
#define MAX 10
int my_atoi(const char * ptr);
int main(void)
{
    char num[MAX];
    int res = 0;

    printf("Enter a number: ");
    gets(num);
    res = my_atoi(num);
    printf("res = %d\n", res);

    return 0;
}

int my_atoi(const char * ptr)
{
    int val = 0;

    while(*ptr && isdigit(*ptr))
    {
        val = val * 10 + (*ptr - '0');
        ptr++;
    }

    return val;
}