/*************************************************************
 * File   : 05_09.c                                          *
 * Date   : 2024-06-19                                       *
 *************************************************************/
#include <stdio.h>
void Temperature(double fahr);
int main(void)
{
	double fahr;
	
	printf("This program converts fahrenheit to celsius and kelvin.\n");
	printf("Enter a temperature in degrees fahrenheit (q to quit): ");
	while(scanf("%lf", &fahr) == 1)
	{
		Temperature(fahr);
		printf("Enter a temperature in degrees fahrenheit"
		       " (q to quit): ");
	}
	printf("Bye!\n");

	return 0;			// return statement
}

void Temperature(double fahr)
{
	const double FAHR_TO_CEL_SCALE = 5.0 / 9.0;
	const double FAHR_TO_CEL_OFFSET = -32.0;
	const double CEL_TO_KEL_OFFSET = 273.16;
	
	double celsius = (fahr + FAHR_TO_CEL_OFFSET) * FAHR_TO_CEL_SCALE;
	double kelvin = celsius + CEL_TO_KEL_OFFSET;

	printf("%.2f degrees fahrenheit is %.2f degrees celsius or "
	       "%.2f degrees kelvin.\n", fahr, celsius, kelvin);	
}
