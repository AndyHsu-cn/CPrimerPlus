/*************************************************************
 * File   : 09_10.c                                          *
 * Date   : 2024-07-08                                       *
 *************************************************************/
#include <stdio.h>
void to_base_n(int n, int base);
int main(void)
{
	int number, base;

	printf("Test to_base_n() function.\n");
	printf("Enter an integer in base 10 and a base to convert to: ");
	while(scanf("%d %d", &number, &base) == 2)
	{
		printf("Base %d equivalent: ", base);
		to_base_n(number, base);
		printf("\n");
		printf("Enter an integer in base 10 and a base to convert to: ");
	}
	printf("Bye.\n");

	return 0;
}

void to_base_n(int n, int base)
{
	if(base < 2 || base > 10)
	{
		printf("Error: base must be between 2 and 10.");
		return;
	}
	if(n == 0)
		return;
	to_base_n(n / base, base);
	printf("%d", n % base);
	
	return;

} 
