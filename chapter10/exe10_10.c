/*	exe10_10.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Write a program that declares a 3x5 array and initializes it to some values of your
 *  choice. Have the program print the values, double all the values, and then display
 *  the new values. Write a function to do the displaying and a second function to do
 *  the doubling. Have the functions take the array name and the number of rows as
 *  arguments.
 */
#include <stdio.h>
#define ROWS    3
#define COLS    5
void show_arr(const float arr[][COLS], int row);
void mult_arr(float arr[][COLS], int row);
int main(void)
{
    float rain[ROWS][COLS] = {
        {4.3,4.3,4.3,3.0,2.0},
        {8.5,8.2,1.2,1.6,2.4},
        {9.1,8.5,6.7,4.3,2.1}
    };
    float target[ROWS][COLS];

    printf("Original:\n");
    show_arr(rain, ROWS);
    mult_arr(rain, ROWS);
    printf("After:\n");
    show_arr(rain, ROWS);

    return 0;
}

void show_arr(const float arr[][COLS], int row)
{
    int i, j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < COLS; j++)
            printf("%8.2f ", arr[i][j]);
        printf("\n");
    }
}

void mult_arr(float arr[][COLS], int row)
{
     int i, j;

    for(i = 0; i < row; i++)
        for(j = 0; j < COLS; j++)
            arr[i][j] *= 2.0;
}