/*************************************************************
 * File   : 10_05.c                                          *
 * Date   : 2024-07-11                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 10
double max_difference(const double ar[], int ar_size);
int main(void)
{
	double ar[LENGTH];

	srand(time(0));
	for(int i = 0; i < LENGTH; i++)
		ar[i] = (rand() % 10000 + 1) / 100.0;
	printf("The difference between the largest and smallest values of ");
	for(int i = 0; i < LENGTH; i++)
		printf("%5.2f ", ar[i]);
	printf("is %5.2f\n", max_difference(ar, LENGTH)); 

	return 0;
}

double max_difference(const double ar[], int ar_size)
{
	double max, min;
	
	max = min = ar[0];
	
	for(int i = 1; i < ar_size; i++)
	{
		if(ar[i] > max)
			max = ar[i];
		else if(ar[i] < min)
			min = ar[i];
	}

	return (max - min);
}
