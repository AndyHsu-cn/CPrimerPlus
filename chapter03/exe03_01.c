/*	exe03_01.c
 *  2024-12-31
 *  modified by Andy Hsu
 * 
 *  Find out what your system does with integer overflow, floating-point overflow,
 *  and floating-point underflow by using the experimental approach; that is, write
 *  programs having these problems.
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("INT_MAX = %d, INT_MAX + 1 = %d\n", INT_MAX, INT_MAX + 1);
    printf("FLT_MAX = %e, FLT_MAX * 10.0 = %e\n", FLT_MAX, FLT_MAX * 10.0f);
    printf("FLT_MIN = %e, FLT_MIN / 10.0 = %e\n", FLT_MIN, FLT_MIN / 10.0f);

    return 0;
}