/*	exe06_13.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Write a program that creates two eight-element arrays of doubles and uses a
 *  loop to let the user enter values for the eight elements of the first array. Have the
 *  program set the elements of the second array to the cumulative totals of the
 *  elements of the first array. For example, the fourth element of the second array
 *  should equal the sum of the first four elements of the first array, and the fifth
 *  element of the second array should equal the sum of the first five elements of the
 *  first array. (It's possible to do this with nested loops, but by using the fact that
 *  the fifth element of the second array equals the fourth element of the second
 *  array plus the fifth element of the first array, you can avoid nesting and just use a
 *  single loop for this task.) Finally, use loops to display the contents of the two
 *  arrays, with the first array displayed on one line and with each element of the
 *  second array displayed below the corresponding element of the first array.
 */
#include <stdio.h>
#define NUM 8
int main(void)
{
    double arr1[NUM], arr2[NUM];
    int ind;

    printf("Enter values for the %d elements of the first array\n", NUM);
    for(ind = 0; ind < NUM; ind++)
    {
        scanf("%lf", &arr1[ind]);
        if(ind == 0)
            arr2[ind] = arr1[ind];
        else
            arr2[ind] = arr2[ind-1] + arr1[ind];
    }
    for(ind = 0; ind < NUM; ind++)
        printf("%5.2f ", arr1[ind]);
    printf("\n");
    for(ind = 0; ind < NUM; ind++)
        printf("%5.2f ", arr2[ind]);
    printf("\n");

    return 0;
}