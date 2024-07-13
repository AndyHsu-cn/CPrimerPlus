/*************************************************************
 * File   : 10_10.c                                          *
 * Date   : 2024-07-12                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void add_arr(const int source1[], const int source2[], int target[], int ar_len);
void print_arr(const int ar[], int ar_len);
int main(void)
{
	int source1[SIZE];
	int source2[SIZE];
	int sum[SIZE];

	srand(time(NULL));
	for(int i = 0; i < SIZE; i++)
	{
		source1[i] = rand() % 100 + 1;
		source2[i] = rand() % 100 + 1; 	
	}
	printf("Source1:\n");
	print_arr(source1, SIZE);
	printf("Source2:\n");
	print_arr(source2, SIZE);
	printf("Sum:\n");
	add_arr(source1, source2, sum, SIZE);
	print_arr(sum, SIZE);

	return 0;
}

void add_arr(const int source1[], const int source2[], int target[], int ar_len)
{
	for(int i = 0; i < ar_len; i++)
		target[i] = source1[i] + source2[i];		
}

void print_arr(const int ar[], int ar_len)
{
	for(int i = 0; i < ar_len; i++)
		printf("%5d ", ar[i]);
	printf("\n");
}
