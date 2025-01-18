/*	exe06_14.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Write a program that reads in a line of input and then prints the line in reverse
 *  order. You can store the input in an array of char; assume that the line is no
 *  longer than 255 characters. Recall that you can use scanf() with the %c specifier
 *  to read a character at a time from input and that the newline character (\n) is
 *  generated when you press the Enter key.
 */
#include <stdio.h>
#define MAX 255
int main(void)
{
    char line[MAX + 1];
    int ind = 0;

    printf("Enter a line of input: ");
    while(scanf("%c", &line[ind]) && line[ind] != '\n')
        ind++;
    line[ind] = '\0';
    printf("prints the line in reverse order: ");
    while(--ind >= 0)
        printf("%c", line[ind]);
    printf("\n");


    return 0;
}