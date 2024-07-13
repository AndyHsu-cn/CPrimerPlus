/*************************************************************
 * File   : 10_03.c                                          *
 * Date   : 2024-07-11                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 10
int max_of_ar(const int ar[], int ar_size);
int main(void)
{
	int ar[LENGTH];

	srand(time(0));
	for(int i = 0; i < LENGTH; i++)
		ar[i] = rand() % 100;
	printf("The max of ");
	for(int i = 0; i < LENGTH; i++)
		printf("%d ", ar[i]);
	printf("is %d\n", max_of_ar(ar, LENGTH)); 

	return 0;
}

int max_of_ar(const int ar[], int ar_size)
{
	int max = ar[0];
	
	for(int i = 1; i < ar_size; i++)
		if(ar[i] > max)
			max = ar[i];
	
	return max;
}
