/*************************************************************
 * File   : 10_04.c                                          *
 * Date   : 2024-07-11                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 10
int index_of_max(const double ar[], int ar_size);
int main(void)
{
	double ar[LENGTH];

	srand(time(0));
	for(int i = 0; i < LENGTH; i++)
		ar[i] = (rand() % 10000 + 1) / 100.0;
	printf("The index of max value in ar  ");
	for(int i = 0; i < LENGTH; i++)
		printf("%5.2f ", ar[i]);
	printf("is %d\n", index_of_max(ar, LENGTH)); 

	return 0;
}

int index_of_max(const double ar[], int ar_size)
{
	int index = 0;
	
	for(int i = 1; i < ar_size; i++)
		if(ar[i] > ar[index])
			index = i;
	
	return index;
}
