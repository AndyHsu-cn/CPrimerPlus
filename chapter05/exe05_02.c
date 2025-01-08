/*	exe05_02.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Write a program that asks for an integer and then prints all the integers from
 *  (and including) that value up to (and including) a value larger by 10. (That is, if
 *  the input is 5, the output runs from 5 to 15.) Be sure to separate each output
 *  value by a space or tab or newline.
 */
#include <stdio.h>
int main(void)
{
    const int NUMBER = 10;
    int start, end;

    printf("Enter an integer: ");
    scanf("%d", &start);
    end = start + NUMBER;
    while(start <= end)
        printf("%d\t", start++);
    printf("\nDone.\n");

    return 0;
}