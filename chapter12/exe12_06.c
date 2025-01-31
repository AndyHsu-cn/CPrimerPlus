/*	exe12_06.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a program that generates 1,000 random numbers in the range 1–10. Don't
 *  save or print the numbers, but do print how many times each number was
 *  produced. Have the program do this for 10 different seed values. Do the numbers
 *  appear in equal amounts? You can use the functions from this chapter or the ANSI
 *  C rand() and srand() functions, which follow the same format that our functions
 *  do. This is one way to test the randomness of a particular random-number
 *  generator.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000
void generate_list(int arr[], int num);
int main(void)
{
    int i;
    int times;
    int seed;

    printf("1    2    3    4    5    6    7    8    9   10\n");
    for(times = 0; times < 10; times++)
    {
        int arr[10] = {0};
    
        printf("Enter seed.\n");
        scanf("%d", &seed);
        srand(seed);
        generate_list(arr, SIZE);
        for(i = 0; i < 10; i++)
            printf("%-4d ", arr[i]);
        printf("\n");
    }
    printf("Done.\n");

    return 0;
}

void generate_list(int arr[], int num)
{
    int ind;

    for(ind = 0; ind < num; ind++)
        arr[rand() % 10]++;
}