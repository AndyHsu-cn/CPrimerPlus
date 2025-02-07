/*	16_19varargs.c
 *  2025-02-07
 *  modified by Andy Hsu
 * 
 *  use variable number of arguments
 */
#include <stdio.h>
#include <stdarg.h>
double sum(int n, ...);
int main(void)
{
    double s, t;

    s = sum(3, 1.1, 2.5, 13.3);
    t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
    printf("return value for "
           "sum(3, 1.1, 2.5, 13.3): %g\n",
           s);
    printf("return value for "
           "sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1): %g\n",
           t);

    return 0;
}

double sum(int n, ...)
{
    va_list ap;
    double tot = 0.0;
    int i;

    va_start(ap, n);
    for(i = 0; i < n; i++)
        tot += va_arg(ap, double);
    va_end(ap);

    return tot;
}