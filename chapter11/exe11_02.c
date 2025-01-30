/*	exe11_02.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  Modify and test the function in exe11_01.c so that it stops after n characters or
 *  after the first blank, tab, or newline, whichever comes first. (Don't just use
 *  scanf().)
 */
#include <stdio.h>
#include <ctype.h>
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
    int ch;

    #if 0
    while(count < num)
    {
        ar[count] = getchar();
        count++;
    }
    ar[count] = '\0';
    #endif
    while(count<num && !isspace(ch=getchar()))
    {
        ar[count] = ch;
        count++;
    }
    ar[count] = '\0';
        
    return ar;
}