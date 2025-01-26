/*	exe10_08.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Write a program that initializes a two-dimensional 3x5 array-of-double and uses
 *  a VLA-based function to copy it to a second two-dimensional array. Also provide a
 *  VLA-based function to display the contents of the two arrays. The two functions
 *  should be capable, in general, of processing arbitrary NxM arrays. (If you don't
 *  have access to a VLA-capable compiler, use the traditional C approach of
 *  functions that can process an Nx5 array).
 */
#include <stdio.h>
#define ROWS    3
#define COLS    5
void copy_arr(int row, int col, const float source[row][col], float target[row][col]);
void show_arr(int row, int col, const float arr[row][col]);
int main(void)
{
    const float rain[ROWS][COLS] = {
        {4.3,4.3,4.3,3.0,2.0},
        {8.5,8.2,1.2,1.6,2.4},
        {9.1,8.5,6.7,4.3,2.1}
    };
    float target[ROWS][COLS];

    copy_arr(ROWS, COLS, rain, target);
    show_arr(ROWS, COLS, target);

    return 0;
}

void copy_arr(int row, int col, const float source[row][col], float target[row][col])
{
    int i, j;

    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            target[i][j] = source[i][j];
}

void show_arr(int row, int col, const float arr[row][col])
{
    int i, j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
            printf("%8.2f ", arr[i][j]);
        printf("\n");
    }
}