/*	03_07showf_pt.c
 *  2024-12-30
 *  modified by Andy Hsu
 * 
 *  displays float value in two ways 
 */
#include <stdio.h>
int main(void)
{
    float aboat = 0xa.1fp10;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be writeen %e and %a\n", aboat, aboat, aboat);
    printf("%f can be writeen %e and %a\n", abet, abet, abet);
    printf("%Lf can be writeen %Le and %La\n", dip, dip, dip);

    return 0;
}