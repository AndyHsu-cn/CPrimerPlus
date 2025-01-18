/*	06_05cmpflt.c
 *  2025-01-10
 *  modified by Andy Hsu
 * 
 *  floating-point comparisons
 */
#include <stdio.h>
#include <float.h>
#include <math.h>
int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    #if 0
    output: 1
    reason: DBL_DIG = 15
    conclude: using only < and > in floating-point comparisons
    printf("DBL_DIG = %d\n", DBL_DIG);
    printf("%d\n", 1.0/3.0  == 0.3333333333333333);
    #endif
    
    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while(fabs(response - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}