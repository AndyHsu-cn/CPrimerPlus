/*************************************************************
 * File   : 10_12.c                                          *
 * Date   : 2024-07-13                                       *
 *************************************************************/
#include <stdio.h>
#define MONTHS 12
#define YEARS 5
void print_annual_avg(int years, int months, double rain[years][months]);
int main(void)
{
 	double rain[YEARS][MONTHS] = 
	{
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }	
	};
	int year, month;
	float subtot, total;

	printf("  YEAR    RAINFALL (inches)\n");
	print_annual_avg(YEARS, MONTHS, rain);
	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  ");
	printf("Nov  Dec\n");
	for(month = 0; month < MONTHS; month++)
	{
		for(year = 0, subtot = 0.0; year < YEARS; year++)
			subtot += rain[year][month];
		printf("%4.1f ", subtot / YEARS);
	}		

	printf("\n");

	return 0;
}

void print_annual_avg(int years, int months, double rain[years][months])
{
	double total = 0.0, subtot = 0.0;
	int i, j;
	for(i = 0, total = 0.0; i < years; i++)
	{
		for(j = 0, subtot = 0.0; j < months; j++)
			subtot += rain[i][j];
		printf("%5d %15.1f\n", 2010 + i, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / years);
}

void print_monthly_avg(int years, int months, double rain[years][months])
{
	int i, j;
	double total = 0.0, subtot = 0.0;
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  ");
	printf("Nov  Dec\n");
	for(i = 0; i < months; i++)
	{
		for(j = 0, subtot = 0.0; j < years; j++)
			subtot += rain[i][j];
		printf("%4.1f ", subtot / years);
	}		
}
