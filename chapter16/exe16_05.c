/*	exe16_05.c
 *  2025-02-07
 *  modified by Andy Hsu
 * 
 *  Write a function that takes as arguments the name of an array of type int
 *  elements, the size of an array, and a value representing the number of picks. The
 *  function then should select the indicated number of items at random from the
 *  array and prints them. No array element is to be picked more than once. (This
 *  simulates picking lottery numbers or jury members.) Also, if your implementation
 *  has time() (discussed in Chapter 12) or a similar function available, use its
 *  output with srand() to initialize the rand() random-number generator. Write a
 *  simple program that tests the function.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define AR_SIZE     10
int arr[AR_SIZE];
bool is_picked[AR_SIZE];
void lottery_pick(int arr[], int size, int times);
void show_arr(int arr[], int size);
int main(void)
{
    int times, i;

    srand(time(0));
    for(i = 0; i < AR_SIZE; i++)
    {
        arr[i] = rand() % 100 + 1;
        is_picked[i] = false;
    }
    puts("Original arr:");
    show_arr(arr, AR_SIZE);
    printf("Enter a value representing the number of picks: ");
    scanf("%d", &times);
    lottery_pick(arr, AR_SIZE, times);
    puts("After pick:");
    printf("**********************************************************\n");
    printf("index ");
    for(i = 0; i < AR_SIZE; i++)
        printf("%4d ", i);
    printf("\n");
    printf("value ");
    for(i = 0; i < AR_SIZE; i++)
        if(is_picked[i])
            printf("%4d ", arr[i]);
        else
            printf("%4s ", "");
    printf("\n");
    printf("**********************************************************\n");

    return 0;
}

void show_arr(int arr[], int size)
{
    int i;

    printf("**********************************************************\n");
    printf("index ");
    for(i = 0; i < size; i++)
        printf("%4d ", i);
    printf("\n");
    printf("value ");
    for(i = 0; i < size; i++)
        printf("%4d ", arr[i]);
    printf("\n");
    printf("**********************************************************\n");
}

void lottery_pick(int arr[], int size, int times)
{
    int i, ind_tmp;

    if(times > size)
        exit(1);
    i = 0;
    printf("picked index is : ");
    while(i < times)
    {
        ind_tmp = rand()%size;
        if(is_picked[ind_tmp] == true)
            continue;
        is_picked[ind_tmp] = true;
        printf("%d ", ind_tmp);
        i++;
    }
    putchar('\n');
}