/*************************************************************
 * File   : 06_09.c                                          *
 * Date   : 2024-06-23                                       *
 *************************************************************/
#include <stdio.h>
double calculate(double num1, double num2);
int main(void)
{
	double num1, num2;

	printf("Enter two floating-point numbers: ");
	while(scanf("%lf %lf", &num1, &num2) == 2)
	{
		printf("(%.3f - %.3f)/(%.3f * %.3f) = %.3f\n",
			num1, num2, num1, num2, calculate(num1, num2));
		printf("Enter two floating-point numbers"
		       " (enter non-numeric to quit): ");
	}	

	return 0;
}

double calculate(double num1, double num2)
{
	return (num1-num2)/(num1*num2);
}
