/*	exe10_02.c
 *  2025-01-25
 *  modified by Andy Hsu
 * 
 *  Write a program that initializes an array-of-double and then copies the contents
 *  of the array into two other arrays. (All three arrays should be declared in the
 *  main program.) To make the first copy, use a function with array notation. To
 *  make the second copy, use a function with pointer notation and pointer
 *  incrementing. Have each function take as arguments the name of the target array
 *  and the number of elements to be copied. That is, the function calls would look
 *  like this, given the following declarations:

    double source[5] = {1.1, 2.2, 3.3., 4.4, 5.5};
    double target1[5];
    double target2[5];
    copy_arr(source, target1, 5);
    copy_ptr(source, target1, 5);

 */
#include <stdio.h>
void copy_arr(const double source[], double target[], int n);
void copy_ptr(const double * ps, double * pt, int n);
void show_array(const double arr[], int n);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    
    copy_arr(source, target1, 5);
    copy_ptr(source, target2, 5);
    printf("target1 array:\n");
    show_array(target1, 5);
    printf("target2 array:\n");
    show_array(target2, 5);

    return 0;
}

void copy_arr(const double source[], double target[], int n)
{
    for(int i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(const double * ps, double * pt, int n)
{
    for(int i = 0; i < n; i++)
        *(pt + i) = *(ps + i); 
}

void show_array(const double arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%8.3f ", arr[i]);
    putchar('\n');
}