/*	exe09_05.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  Write and test a function called larger_of() that replaces the contents of two
 *  double variables with the maximum of the two values. For example,
 *  larger_of(x,y) would reset both x and y to the larger of the two.
 */
#include <stdio.h>
// double large_of(int a, int b);
void large_of(double * pa, double * pb);
int main(void)
{
    double a = 3.0, b = 5.0;
    printf("Before large_of(), a = %f, b = %f\n", a, b);
    #if 0
    if(a == large_of(a, b))
        b = a;
    else
        a = b;
    #endif
    large_of(&a, &b);
    printf("After large_of(), a = %f, b = %f\n", a, b);

    return 0;
}
#if 0
double large_of(int a, int b)
{
    return (a > b? a: b);
}
#endif
void large_of(double * pa, double * pb)
{
    *pa = *pb = *pa > *pb? *pa: *pb;
}