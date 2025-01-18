/*	exe06_10.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Write a program that reads eight integers into an array and then prints them in
 *  reverse order.
 */
#include <stdio.h>
#define NUM 8
int main(void)
{
    int ind;
    int arr[NUM];

    printf("Enter %d integers: ", NUM);
    for(ind = 0; ind < NUM; ind++)
        scanf("%d", &arr[ind]);
    for(ind = NUM - 1; ind >= 0; ind--)
        printf("%5d ", arr[ind]);
    printf("\n");

    return 0;
}