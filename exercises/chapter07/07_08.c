/*************************************************************
 * File   : 07_08.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#include <stdbool.h>
#define BASIC_RATE_1 8.75
#define BASIC_RATE_2 9.33
#define BASIC_RATE_3 10.00
#define BASIC_RATE_4 11.20
#define OVERTIME_HOURS 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define TAX_BREAK_1 300
#define TAX_BREAK_2 (TAX_BREAK_1 + 150)
#define TAX_BASE_1 (TAX_RATE_1 * TAX_BREAK_1)
#define TAX_BASE_2 (TAX_BASE_1 + (TAX_BREAK_2 - TAX_BREAK_1) * TAX_RATE_2)

double calc_gross_pay(double hours, double rate);
double calc_taxes(double gross_pay);
int main(void)
{
	double rate, hours, gross_pay, taxes;
	int rate_option;
	bool exit_flag = false;	

	while(1)
	{
		printf("*******************************************************************\n");
		printf("Enter the number of corresponding to the desired pay rate or action\n");
		printf("1) $%5.2f   2) $%5.2f\n", BASIC_RATE_1, BASIC_RATE_2);
		printf("3) $%5.2f   4) $%5.2f\n", BASIC_RATE_3, BASIC_RATE_4);
		printf("5) quit\n");
		printf("*******************************************************************\n");
			
		scanf("%d", &rate_option);
		exit_flag = false;	
		switch(rate_option)
		{
			case 1: rate = BASIC_RATE_1; break;
			case 2: rate = BASIC_RATE_2; break;
			case 3: rate = BASIC_RATE_3; break;
			case 4: rate = BASIC_RATE_4; break;
			case 5: exit_flag = true; break;
			default: 
				while(getchar() != '\n')
					;
				printf("Please enter an integer between 1 and 5.\n\n");
				continue;
		}	
		if(exit_flag)
			break;
		printf("Enter number of hours worked in a week: ");
		if(scanf("%lf", &hours) == 1)
		{
			gross_pay = calc_gross_pay(hours, rate);
			taxes = calc_taxes(gross_pay);
			printf("For %.1f hours of work you make $%.2f and pay $%.2f in taxes.\n", hours, gross_pay, taxes);
		}else
			printf("Invalid input ... terminating.\n");
	}
	printf("Bye!\n");
		
	return 0;
}
double calc_gross_pay(double hours, double rate)
{
	if(hours > OVERTIME_HOURS)
		return OVERTIME_HOURS * rate + (hours - OVERTIME_HOURS) * rate * OVERTIME_MULTIPLIER;
	else
		return rate * hours;
}

double calc_taxes(double gross_pay)
{
	if(gross_pay <= TAX_BREAK_1)
		return TAX_RATE_1 * gross_pay;
	else if(gross_pay <= TAX_BREAK_2)
		return TAX_BASE_1 + (gross_pay - TAX_BREAK_1) * TAX_RATE_2;
	else
		return TAX_BASE_2 + TAX_RATE_3 * (gross_pay - TAX_BREAK_2);
}
