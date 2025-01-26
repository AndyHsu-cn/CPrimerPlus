/*	exe10_12.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Write a program that prompts the user to enter three sets of five double numbers
 *  each. The program should accomplish all of the following:
 *  a. Store the information in a 3x5 array.
 *  b. Compute the average of each set of five values.
 *  c. Compute the average of all the values.
 *  d. Determine the largest value of the 15 values.
 *  e. Report the results.
 *  Each major task should be handled by a separate function using the traditional C
 *  approach to handling arrays. Accomplish task "b" by using a function that
 *  computes and returns the average of a one-dimensional array; use a loop to call
 *  this function three times. The other tasks should take the entire array as an
 */
#include <stdio.h>
#define ROWS    3
#define COLS    5
void store_arr(double arr[][COLS], int rows);
double avg_row(double arr[], int n);
double avg_all(double arr[][COLS], int rows);
double max_arr(double arr[][COLS], int rows);
void show_arr(double arr[][COLS], int rows);
int main(void)
{
    double array[ROWS][COLS];
    int i;

    store_arr(array, ROWS);
    for(i = 0; i < ROWS; i++)
        printf("row %d: avg = %.2f\n", i, avg_row(array[i], COLS));
    printf("total avg = %.2f\n", avg_all(array, ROWS));
    printf("max of array = %.2f\n", max_arr(array, ROWS));
    show_arr(array, ROWS);

    return 0;
}

void store_arr(double arr[][COLS], int rows)
{
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < COLS; j++)
            scanf("%lf", &arr[i][j]);
}

double avg_row(double arr[], int n)
{
    double tot = 0.0;
    int ind;

    for(ind = 0; ind < n; ind++)
        tot += arr[ind];

    return tot / n;
}

double avg_all(double arr[][COLS], int rows)
{
    double tot = 0.0;
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < COLS; j++)
            tot += arr[i][j];
    
    return tot / (rows * COLS);
}

double max_arr(double arr[][COLS], int rows)
{
    double max = arr[0][0];
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < COLS; j++)
            if(arr[i][j] > max)
                max = arr[i][j];

    return max;
}

void show_arr(double arr[][COLS], int rows)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < COLS; j++)
            printf("%-8.2f ", arr[i][j]);
        printf("\n");
    }
}