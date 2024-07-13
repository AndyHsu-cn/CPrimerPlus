/*************************************************************
 * File   : 10_07.c                                          *
 * Date   : 2024-07-12                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5
void copy_ptr(double * target, const double * source, int arr_len);
void print_row(double(*arr)[MAX], int row);
int main(void)
{
	double source[MAX][MAX], target[MAX][MAX];

	srand(time(NULL));
	// initialize source array
	for(int i = 0; i < MAX; i++)
		for(int j = 0; j < MAX; j++)
			source[i][j] = (rand() % 10000 + 1) / 100.0 ; 
	// copy source array to target
	for(int r = 0; r < MAX; r++)
		copy_ptr(target[r], source[r], MAX);
	// print arrays
	printf("%-35s", "Source");
	printf("     ");
	printf("%-35s", "Target");
	putchar('\n');
	for(int i = 0; i < 75; i++)
		putchar('-');
	putchar('\n');
	for(int r = 0; r < MAX ; r++)
	{
		print_row(source, r);
		printf("  |  ");
		print_row(target, r);
		putchar('\n');
	}


	return 0;
}

void copy_ptr(double * target, const double * source, int arr_len)
{
	for(int i = 0; i < arr_len; i++)
		*(target + i) = *(source + i);
}

void print_row(double(*arr)[MAX], int row)
{
	for(int i = 0; i < MAX; i++)
		printf("%5.2f ", arr[row][i]);
}
