/*************************************************************
 * File   : 09_06.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
void sort_two_var(double * px, double * py);
void sort_variables(double * px, double * py, double * pz);
int main(void)
{
	double x, y, z;

	printf("Test sort_variables():\n");
	printf("Enter three numbers x, y and z:\n");
	while(scanf("%lf %lf %lf", &x, &y, &z) == 3)
	{
		printf("Before calling sort_variables():\n");
		printf("x = %f, y = %f, z = %f\n", x, y, z);
		printf("After calling sort_variables():\n");
		sort_variables(&x, &y, &z);
		printf("x = %f, y = %f, z = %f\n", x, y, z);
		printf("Enter three numbers x, y and z:\n");
	}
	printf("Bye.\n");

	return 0;
}

void sort_two_var(double * px, double * py)
{
	int tmp;

	if(*px > *py)
	{
		tmp = *px;
		*px = *py;
		*py = tmp;
	}
}

void sort_variables(double * px, double * py, double * pz)
{
	sort_two_var(px, py);
	sort_two_var(py, pz);
}
