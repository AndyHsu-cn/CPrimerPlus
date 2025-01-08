/*	exe05_07.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Write a program that requests a type float number and prints the value of the
 *  number cubed. Use a function of your own design to cube the value and print it.
 *  The main() program should pass the entered value to this function.
 */
#include <stdio.h>
float cube(float num);
int main(void)
{
    float num;

    printf("Enter a float number: ");
    scanf("%f", &num);
    printf("%.2f cube is %.2f\n", num, cube(num));

    return 0;
}

float cube(float num)
{
    return (num*num*num);
}