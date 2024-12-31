/*	exe03_07.c
 *  2024-12-31
 *  modified by Andy Hsu
 * 
 *  There are 2.54 centimeters to the inch. Write a program that asks you to enter
 *  your height in inches and then displays your height in centimeters. Or, if you
 *  prefer, ask for the height in centimeters and convert that to inches.
 */
#include <stdio.h>
int main(void)
{
    const float CENTIMETER_PER_INCH = 2.54;
    float height_cm, height_inch;

    printf("Enter your height in inches: ");
    scanf("%f", &height_inch);
    height_cm = CENTIMETER_PER_INCH * height_inch;
    printf("Your height in centimeters is: %f.\n", height_cm);

    return 0;
}