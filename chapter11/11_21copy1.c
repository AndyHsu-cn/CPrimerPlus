/*	11_21copy1.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  strcpy() demo
 */
#include <stdio.h>
#include <string.h>
#define SIZE    40
#define LIM     5
int main(void)
{   
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while(i < LIM && gets(temp))
    {
        if(temp[0] != 'q')
            printf("%s doesn't beginning with q:\n", temp);
        else{
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for(i = 0; i < LIM; i++)
        puts(qwords[i]);

    return 0;
}