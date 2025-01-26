/*	exe10_07.c
 *  2025-01-26
 *  modified by Andy Hsu
 * 
 *  Use a copy function from exe10_02.c to copy the third through fifth elements of a
 *  seven-element array into a three-element array. The function itself need not be
 *  altered; just choose the right actual arguments. (The actual arguments need not
 *  be an array name and array size. They only have to be the address of an array
 *  element and a number of elements to be processed.)
 */
#include <stdio.h>
void copy_ptr(const double * ps, double * pt, int n);
void show_array(const double arr[], int n);
int main(void)
{   
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3];

    copy_ptr(source + 3, target, 3);
    show_array(target, 3);

    return 0;
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