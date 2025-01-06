/*	04_04pizza.c
 *  2025-01-01
 *  modified by Andy Hsu
 * 
 *  uses defined constants in a pizza context
 */
#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float radius, circum, area;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    circum = 2.0 * PI * radius;
    area = PI * radius * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}