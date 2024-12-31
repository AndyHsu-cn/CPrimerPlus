/*	exe03_02.c
 *  2024-12-31
 *  modified by Andy Hsu
 * 
 *  Write a program that asks you to enter an ASCII code value, such as 66, and then
 *  prints the character having that ASCII code.
 */
#include <stdio.h>
int main(void)
{
    int ascii_code;

    printf("Enter an ASCII code value: ");
    scanf("%d", &ascii_code);
    printf("The character having ASCII code %d is %c.\n", ascii_code, ascii_code);

    return 0;
}