/*************************************************************
 * File   : 05_04.c                                          *
 * Date   : 2024-06-19                                       *
 *************************************************************/
#include <stdio.h>
const double CM_PER_IN = 2.54;
const int IN_PER_FT = 12;
int main(void)
{
	double height_cm, height_in;	// height in total cm or inches
	double inches;
	int feet;	

	printf("Enter a height in centimeters: ");
	scanf("%lf", &height_cm);
	while(height_cm > 0)
	{
		height_in = height_cm / CM_PER_IN;
		feet = (int)(height_in / IN_PER_FT);
		inches = height_in - feet * IN_PER_FT;
		printf("%.1f cm = %d feet, %.1f inches\n",
			height_cm, feet, inches);
		printf("Enter a height in centimeters: ");
		scanf("%lf", &height_cm);
	}	

	return 0;
}
