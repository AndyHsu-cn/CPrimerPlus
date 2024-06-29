/*************************************************************
 * File   : 07_10.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#define SINGLE 1
#define HEAD_OF_HOUSEHOLD 2
#define MARRIED_JOINT 3
#define MARRIED_SEPARATE 4
#define EXIT 5
#define RATE_1 0.15
#define RATE_2 0.28
int main(void)
{
	int category;
	double income, taxes, base;

	while(1)
	{
		printf("1) Single    2) Head of Household   3) Married, Joint\n"
		       "4) Married, Separate   5) Exit\n");
		while(scanf("%d", &category) != 1 || category < 1 || category > 5)
		{
			printf("Invalid input, Please enter an integer "
			       "between 1 and 5.\n");
		printf("Enter your state: ");
			while(getchar() != '\n')
				;
		}
		switch(category)
		{
			case SINGLE: base = 17850.0; break;
			case HEAD_OF_HOUSEHOLD: base = 23900.0; break;
			case MARRIED_JOINT: base = 29750.0; break;
			case MARRIED_SEPARATE: base = 14975.0; break;
			case EXIT:
				printf("Bye!\n");
				return 0;
		}
		printf("Enter your income: ");
		while(scanf("%lf", &income) != 1 || income < 0)
		{
			while(getchar() != '\n')
				;
			printf("Invalid input, Please enter a positive number.\n");
			printf("Enter your income: ");
		}
		if(income < base)
			taxes = income * RATE_1;
		else
			taxes = base * RATE_1 + (income - base) * RATE_2;
		printf("You will owe $%.2f in taxes.\n\n", taxes);
	}

	return 0;
}
