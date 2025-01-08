/*	exe05_08.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Write a program that requests the user to enter a Fahrenheit temperature. The
 *  program should read the temperature as a type double number and pass it as an
 *  argument to a user-supplied function called Temperatures(). This function should
 *  calculate the Celsius equivalent and the Kelvin equivalent and display all three
 *  temperatures with a precision of two places to the right of the decimal. It should
 *  identify each value with the temperature scale it represents. Here is the formula
 *  for converting Fahrenheit to Celsius:
 *  Celsius = 1.8 * Fahrenheit + 32.0
 *  The Kelvin scale, commonly used in science, is a scale in which 0 represents
 *  absolute zero, the lower limit to possible temperatures. Here is the formula for
 *  converting Celsius to Kelvin:
 *  Kelvin = Celsius + 273.16
 *  The Temperatures() function should use const to create symbolic
 *  representations of the three constants that appear in the conversions. The main()
 *  function should use a loop to allow the user to enter temperatures repeatedly,
 *  stopping when a q or other nonnumeric value is entered.
 */
#include <stdio.h>
void Temperatures(float fahrenheit);
const float SCALE = 1.8;
const float OFFSET1 = 32.0;
const float OFFSET2 = 273.16;
int main(void)
{
    float fahrenheit;

    printf("Enter a Fahrenheit temperature: ");
    while(scanf("%f", &fahrenheit) == 1)
    {
        Temperatures(fahrenheit);
        printf("Enter next Fahrenheit temperature: ");
    }
    printf("Done.\n");

    return 0;
}

void Temperatures(float fahrenheit)
{
    float celsius, kelvin;

    celsius = SCALE * fahrenheit + OFFSET1;
    kelvin = celsius + OFFSET2;
    printf("Fahrenheit %.2f equals %.2f Celsius, equals %.2f Kelvin.\n", fahrenheit, celsius, kelvin);
}