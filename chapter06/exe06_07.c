/*	exe06_07.c
 *  2025-01-16
 *  modified by Andy Hsu
 * 
 *  Write a program that requests two floating-point numbers and prints the value of
 *  their difference divided by their product. Have the program loop through pairs of
 *  input values until the user enters nonnumeric input.
 */
#include <stdio.h>
#include <math.h>
int main(void)
{
    float num1, num2;

    printf("Enter two floating-point numbers: ");
    while(scanf("%f %f", &num1, &num2) == 2)
    {
        printf("Their difference divided by their product : %f\n", fabs(num1 - num2) / (num1 * num2));
        printf("Enter next two floating-point numbers: ");
    }
    printf("Bye!\n");

    return 0;
}