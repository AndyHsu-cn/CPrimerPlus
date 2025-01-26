/*	exe10_09.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Write a function that sets each element in an array to the sum of the
 *  corresponding elements in two other arrays. That is, if array 1 has the values 2,
 *  4, 5, and 8 and array 2 has the values 1, 0, 4, and 6, the function assigns array 3
 *  the values 3, 4, 9, and 14. The function should take three array names and an
 *  array size as arguments. Test the function in a simple program.
 */
#include <stdio.h>
#define NUM     4
void add_array(const double source1[], const double source2[], double target[], int num);
void show_array(const double arr[], int n);
int main(void)
{
    double arr1[NUM] = {2, 4, 5, 8};
    double arr2[NUM] = {1, 0, 4, 6};
    double arr3[NUM];

    add_array(arr1, arr2, arr3, NUM);
    show_array(arr3, NUM);

    return 0;
}

void add_array(const double source1[], const double source2[], double target[], int num)
{
    int ind;

    for(ind = 0; ind < num; ind++)
        target[ind] = source1[ind] + source2[ind];
}

void show_array(const double arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%8.3f ", arr[i]);
    putchar('\n');
}