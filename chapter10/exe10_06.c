/*	exe10_06.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Write a program that initializes a two-dimensional array-of-double and uses one
 *  of the copy functions from exe10_02.c to copy it to a second two-dimensional
 *  array. (Because a two-dimensional array is an array of arrays, a one-dimensional
 *  copy function can be used with each subarray.)
 */
#include <stdio.h>
#define ROWS    3
#define COLS    4
void copy_arr(const double source[], double target[], int n);
void show_array(const double arr[], int n);
int main(void)
{
    double junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };
    double copy_junk[ROWS][COLS];
    int row;

    for(row = 0; row < ROWS; row++)
        copy_arr(junk[row], copy_junk[row], COLS);
    for(row = 0; row < ROWS; row++)
        show_array(copy_junk[row], COLS);

    return 0;
}

void copy_arr(const double source[], double target[], int n)
{
    for(int i = 0; i < n; i++)
        target[i] = source[i];
}

void show_array(const double arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%8.3f ", arr[i]);
    putchar('\n');
}