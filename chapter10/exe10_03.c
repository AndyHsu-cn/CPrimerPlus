/*	exe10_03.c
 *  2025-01-25
 *  modified by Andy Hsu
 * 
 *  Write a function that returns the largest value stored in an array-of-int. Test the
 *  function in a simple program.
 */
#include <stdio.h>
int max_of_arr(int arr[], int n);
int main(void)
{
    int arr[5] = {3, 4, 5, 8, 4};
    
    printf("Max value of arr is %d\n", max_of_arr(arr, 5));

    return 0;
}

int max_of_arr(int arr[], int n)
{
    int max_value, ind;

    for(ind = 1, max_value = arr[0]; ind < n; ind++)
        if(arr[ind] > max_value)
            max_value = arr[ind];

    return max_value;
}