/*	exe09_08.c
 *  2025-01-23
 *  modified by Andy Hsu
 * 
 *  Redo exe09_07.c, but this time use a recursive function.
 */
#include <stdio.h>
double rpower(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while(scanf("%lf %d", &x, &exp) == 2)
    {
        if(exp < 0)
            xpow = 1 / rpower(x, -exp);
        else
            xpow = rpower(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double rpower(double n, int p)
{
    #if 0
    double pow = 1.0;
    int i;

    if( p >= 0){
        for(i = 1; i <= p; i++)
        pow *= n;
    }else{
        pow = 1 / rpower(n, -p);
    }
    
    return pow;
    #endif
    double pow = 1.0;
    
    if(p > 0)
        pow = n * rpower(n, p-1);
    else if(p == 0)
        pow = 1.0;

    return pow;
}