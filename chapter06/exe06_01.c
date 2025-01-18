/*	exe06_01.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Write a program that creates an array with 26 elements and stores the 26
 *  lowercase letters in it. Also have it show the array contents.
 */
#include <stdio.h>
#define NUM 26
int main(void)
{
    char letters[NUM];
    int ind;

    for(ind = 0; ind < NUM; ind++)
        letters[ind] = 'a' + ind;
    for(ind = 0; ind < NUM; ind++)
        printf("%c", letters[ind]);
    printf("\n");

    return 0;
}