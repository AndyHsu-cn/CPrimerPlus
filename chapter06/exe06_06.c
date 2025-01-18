/*	exe06_06.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Write a program that reads a single word into a character array and then prints
 *  the word backward. Hint: Use strlen() (Chapter 4) to compute the index of the
 *  last character in the array.
 */
#include <stdio.h>
#include <string.h>
#define MAX 80
int main(void)
{
    char word[80];
    int ind;

    printf("Enter a single word: ");
    scanf("%s", word);
    printf("backward print: ");
    for(ind = strlen(word) - 1; ind >= 0; ind--)
        printf("%c", word[ind]);
    printf("\n");

    return 0;
}