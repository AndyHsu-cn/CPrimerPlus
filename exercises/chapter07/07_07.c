/*************************************************************
 * File   : 07_07.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#define BASIC_RATE 10.0
#define OVERTIME_HOURS 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define TAX_BREAK_1 300
#define TAX_BREAK_2 (TAX_BREAK_1 + 150)
#define TAX_BASE_1 (TAX_RATE_1 * TAX_BREAK_1)
#define TAX_BASE_2 (TAX_BASE_1 + (TAX_BREAK_2 - TAX_BREAK_1) * TAX_RATE_2)

double calc_gross_pay(double hours);
double calc_taxes(double gross_pay);
int main(void)
{
	double hours, gross_pay, taxes;

	printf("Enter number of hours worked in a week: ");
	if(scanf("%lf", &hours) == 1)
	{
		gross_pay = calc_gross_pay(hours);
		taxes = calc_taxes(gross_pay);
		printf("For %.1f hours of work you make $%.2f and pay $%.2f in taxes.\n", hours, gross_pay, taxes);
	}else
		printf("Invalid input ... terminating.\n");
	
	return 0;
}
double calc_gross_pay(double hours)
{
	if(hours > OVERTIME_HOURS)
		return OVERTIME_HOURS * BASIC_RATE + (hours - OVERTIME_HOURS) * BASIC_RATE * OVERTIME_MULTIPLIER;
	else
		return BASIC_RATE * hours;
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
