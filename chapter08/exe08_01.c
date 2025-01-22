/*	exe08_01.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Devise a program that counts the number of characters in its input up to the end
 *  of file.
 */
#include <stdio.h>
int main(void)
{
    int ch;
    int count = 0;

    while((ch = getchar()) != EOF)
        count++;
    printf("number of characters in its input is %d\n", count);

    return 0;
}