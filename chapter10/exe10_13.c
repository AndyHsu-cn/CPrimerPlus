/*	exe10_13.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Do exe10_12.c, but use variable-length array function parameters.
 */
#include <stdio.h>
#define ROWS    3
#define COLS    5
void store_arr(int rows, int cols, double arr[rows][cols]);
double avg_row(double arr[], int n);
double avg_all(int rows, int cols, double arr[rows][cols]);
double max_arr(int rows, int cols, double arr[rows][cols]);
void show_arr(int rows, int cols, double arr[rows][cols]);
int main(void)
{
    double array[ROWS][COLS];
    int i;

    store_arr(ROWS, COLS, array);
    for(i = 0; i < ROWS; i++)
        printf("row %d: avg = %.2f\n", i, avg_row(array[i], COLS));
    printf("total avg = %.2f\n", avg_all(ROWS, COLS, array));
    printf("max of array = %.2f\n", max_arr(ROWS, COLS, array));
    show_arr(ROWS, COLS, array);

    return 0;
}

void store_arr(int rows, int cols, double arr[rows][cols])
{
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
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

double avg_all(int rows, int cols, double arr[rows][cols])
{
    double tot = 0.0;
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            tot += arr[i][j];
    
    return tot / (rows * cols);
}

double max_arr(int rows, int cols, double arr[rows][cols])
{
    double max = arr[0][0];
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            if(arr[i][j] > max)
                max = arr[i][j];

    return max;
}

void show_arr(int rows, int cols, double arr[rows][cols])
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%-8.2f ", arr[i][j]);
        printf("\n");
    }
}