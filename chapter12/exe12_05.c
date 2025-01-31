/*	exe12_05.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a program that generates a list of 100 random numbers in the range 1–10
 *  in sorted decreasing order. (You can adapt the sorting algorithm from Chapter 11,
 *  "Character Strings and String Functions," to type int. In this case, just sort the
 *  numbers themselves.)
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX     100 
void intsrt(int arr[], int num);
void generate_list(int arr[], int num);
void show_list(int arr[], int num);
int main(void)
{
    int arr[MAX];

    generate_list(arr, MAX);
    puts("Original:");
    show_list(arr, MAX);
    puts("After sort:");
    intsrt(arr, MAX);
    show_list(arr, MAX);

    return 0;
}

void generate_list(int arr[], int num)
{
    int ind;

    srand((unsigned int)time(0));
    for(ind = 0; ind < num; ind++)
        arr[ind] = rand() % 10 + 1; 
}

void intsrt(int arr[], int num)
{
    int temp;
    int top, seek;

    for(top = 0; top < num - 1; top++)
        for(seek = top + 1; seek < num; seek++)
            if(arr[top] > arr[seek])
            {
                temp = arr[top];
                arr[top] = arr[seek];
                arr[seek] = temp;
            }
}

void show_list(int arr[], int num)
{
    int ind;

    for(ind = 0; ind < num; ind++)
    {
        printf("%3d ", arr[ind]);
        if(ind%20 == 19)
            printf("\n");
    }   
}