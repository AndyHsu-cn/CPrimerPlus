/*	exe06_12.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Write a program that creates an eight-element array of ints and sets the
 *  elements to the first eight powers of 2 and then prints the values. Use a for loop
 *  to set the values, and, for variety, use a do while loop to display the values.
 *  
 *  Note: compile format: gcc filename.c -lm
 */
#include <stdio.h>
#include <math.h>
#define NUM 8
int main(void)
{
    int arr[NUM];
    int ind;

    for(ind = 0; ind < NUM; ind++)
        arr[ind] = pow(2, ind);
    ind = 0;
    do{
        printf("%5d ", arr[ind]);
    }while(++ind < NUM);
    printf("\n");

    return 0;
}