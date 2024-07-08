/*************************************************************
 * File   : 09_04.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
double harmonic_mean(double x, double y);
int main(void)
{
	double x, y;

	printf("Harmonic means\n");
	printf("Enter two numbers: ");
	while(scanf("%lf %lf", &x, &y) == 2)
	{
		printf("%f\n", harmonic_mean(x, y));
		printf("Enter two numbers: ");
	}
	printf("Bye.\n");

	return 0;
}

double harmonic_mean(double x, double y)
{
	return 2 / (1 / x + 1 / y);
}
