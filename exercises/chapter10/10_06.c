/*************************************************************
 * File   : 10_06.c                                          *
 * Date   : 2024-07-11                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 10
void reverse_ar(double ar[], int ar_size);
int main(void)
{
	double ar[LENGTH];

	srand(time(0));
	for(int i = 0; i < LENGTH; i++)
		ar[i] = (rand() % 10000 + 1) / 100.0;
	printf("Original: ");
	for(int i = 0; i < LENGTH; i++)
		printf("%5.2f ", ar[i]);
	putchar('\n');
	printf("Reversed: ");
	reverse_ar(ar, LENGTH);
	for(int i = 0; i < LENGTH; i++)
		printf("%5.2f ", ar[i]);
	putchar('\n');

	return 0;
}

void reverse_ar(double ar[], int ar_size)
{
	double tmp;

	for(int i = 0; i < ar_size / 2; i++)
	{
		tmp = ar[i];
		ar[i] = ar[ar_size - i - 1];
		ar[ar_size - i - 1] = tmp;
	}
}
