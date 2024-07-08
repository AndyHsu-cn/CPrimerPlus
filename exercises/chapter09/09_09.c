/*************************************************************
 * File   : 09_09.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;

	printf("Test power() function.\n");
	printf("Enter a double base and int exponent: ");
	while(scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter a double base and int exponent: ");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1.0;
	int i;
	
	if(n == 0)
	{
		if(p == 0)
		{
			printf("Warning 0^0 is undefined. using 1.\n");
			return 1.0;
		}
		else
			return 0.0;
	}
	
	if(p == 0)
		return 1.0;
	pow = n * power(n, abs(p) - 1);
	
	if(p < 0)
		pow = 1 / pow; 	

	return pow;
}
