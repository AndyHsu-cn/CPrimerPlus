/*************************************************************
 * File   : 09_05.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
void large_of(double * x, double * y);
int main(void)
{
	double x, y;

	printf("Test large_of() function.\n");
	printf("*************************\n");
	printf("Enter two numbers x and y: ");
	while(scanf("%lf %lf", &x, &y) == 2)
	{
		printf("Before calling large_of():\n");
		printf("x = %f, y = %f\n", x, y);
		large_of(&x, &y);
		printf("After calling large_of():\n");
		printf("x = %f, y = %f\n", x, y);
		printf("Enter two numbers x and y: ");
	}
	printf("Bye.\n");

	return 0;
}

void large_of(double * x, double * y)
{
	if(*x > *y)
		*y = *x;
	else
		*x = *y;
}
