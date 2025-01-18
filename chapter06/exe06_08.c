/*	exe06_08.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Modify exe06_07.c so that it uses a function to return the value of the
 *  calculation.
 */
#include <stdio.h>
#include <math.h>
float calculation(float num1, float num2);
int main(void)
{
    float num1, num2;

    printf("Enter two floating-point numbers: ");
    while(scanf("%f %f", &num1, &num2) == 2)
    {
        printf("Their difference divided by their product : %f\n", calculation(num1, num2));
        printf("Enter next two floating-point numbers: ");
    }
    printf("Bye!\n");

    return 0;
}

float calculation(float num1, float num2)
{
    return fabs(num1 - num2) / (num1 * num2);
}