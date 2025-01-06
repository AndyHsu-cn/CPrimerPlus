/*	exe04_04.c
 *  2024-01-05
 *  modified by Andy Hsu
 * 
 *  Write a program that requests your height in inches and your name, and then
 *  displays the information in the following form:
    
    Dabney, you are 6.208 feet tall

 *  Use type float, and use / for division. If you prefer, request the height in
 *  centimeters and display it in meters.
 */
#include <stdio.h>
#define INCH_PER_FEET 12
int main(void)
{
    float height_inch, height_feet;
    char name[20];

    printf("Enter your height in inches: ");
    scanf("%f", &height_inch);
    height_feet = height_inch / INCH_PER_FEET;
    printf("What's your name: ");
    scanf("%s", name);
    printf("%s, you are %.3f feet tall\n", name, height_feet);

    return 0;
}