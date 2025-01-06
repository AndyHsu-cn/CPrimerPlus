/*	exe04_07.c
 *  2024-01-06
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to enter the number of miles traveled and the
 *  number of gallons of gasoline consumed. It should then calculate and display the
 *  miles-per-gallon value, showing one place to the right of the decimal. Next, 
 *  using the fact that one gallon is about 3.785 liters and one mile is about 1.609
 *  kilometers, it should convert the mile-per-gallon value to a liters-per-100-km
 *  value, the usual European way of expressing fuel consumption, and display the
 *  result, showing one place to the right of the decimal. (Note that the U.S. scheme
 *  measures the amount of fuel per distance, whereas the European scheme measures the
 *  distance per amount of fuel.) Use symbolic constants (using const or #define) for
 *  the two conversion factors.
 */
#include <stdio.h>
int main(void)
{
    const float LITER_PER_GALLON = 3.785;
    const float KILOMETER_PER_MILES = 1.609;
    float gallon, liter;
    float mile, kilometer;
    float us_scheme, eu_scheme;

    printf("Enter the number of miles traveled: ");
    scanf("%f", &mile);
    printf("then the number of gallons of gasoline consumed: ");
    scanf("%f", &gallon);
    us_scheme = mile / gallon;
    liter = gallon * LITER_PER_GALLON;
    kilometer = mile * KILOMETER_PER_MILES;
    eu_scheme = 100 * liter / kilometer;
    printf("U.S scheme is %.1f; European scheme is %.1f\n", us_scheme, eu_scheme);

    return 0;
}