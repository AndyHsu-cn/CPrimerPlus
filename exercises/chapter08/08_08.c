/*************************************************************
 * File   : 08_08.c                                          *
 * Date   : 2024-07-03                                       *
 *************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
void print_menu(void);
int get_first(void);
float get_number(void);
int main(void)
{
	int operation;
	float num1, num2;

	print_menu();
	while((operation = get_first()) != 'q')
	{
		printf("Enter first number: ");
		num1 = get_number();
		printf("Enter second number: ");
		num2 = get_number();

		switch(operation)
		{
			case 'a':
				printf("%.3f + %.3f = %.3f\n",
					num1, num2, num1 + num2);
				break;
			case 's':
				printf("%.3f - %.3f = %.3f\n",
					num1, num2, num1 - num2);
				break;
			case 'm':
				printf("%.3f * %.3f = %.3f\n",
					num1, num2, num1 * num2);
				break;
			case 'd':
				while(num2 == 0)
				{
					printf("Enter a number other than 0: ");
					num2 = get_number();
				}
				printf("%.3f / %.3f = %.3f\n",
					num1, num2, num1 / num2);
				break;
		}
		print_menu();
	}

	return 0;
}

void print_menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a) add                  s) subtract\n");
	printf("m) multiply             d) divide\n");
	printf("q) quit\n");
}

int get_first(void)
{
	int ch;
	
	while(isspace(ch = getchar()))
		;
	while(getchar() != '\n')
		continue;
	return ch;
}

float get_number(void)
{
	int ch;
	float num;

	while(scanf("%f", &num) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not a number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}

	return num;
}
