/*************************************************************
 * File   : 10_14.c                                          *
 * Date   : 2024-07-13                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 5
void initial_arr(int rows, int cols, double arr[rows][cols]);
void print_2d(int rows, int cols, double arr[rows][cols]);
double compute_row_avg(int len, double arr[len]);
double compute_array_avg(int rows, int cols, double arr[rows][cols]);
double largest_value(int rows, int cols, double arr[rows][cols]);
int main(void)
{
	double data[ROWS][COLS];

	initial_arr(ROWS, COLS, data);
	printf("Initial array:\n");
	print_2d(ROWS, COLS, data);
	printf("Row averages:\n");
	for(int i = 0; i < ROWS; i++)
		printf("row[%d] = %5.2f\n", i + 1, compute_row_avg(COLS, data[i]));	
	printf("Entire averages: ");
		printf("%5.2f\n", compute_array_avg(ROWS, COLS, data));
	printf("Maximum array value: %5.2f\n", largest_value(ROWS, COLS, data));

	return 0;
}

void initial_arr(int rows, int cols, double arr[rows][cols])
{
	int i, j;

	srand(time(NULL));
	for(i = 0; i < rows; i++)
		for(j = 0; j < COLS; j++)
			 arr[i][j] = (rand() % 10000 + 1) / 100.0;
}

void print_2d(int rows, int cols, double arr[rows][cols])
{
	int i, j;

	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < COLS; j++)
			printf("%5.2f ", arr[i][j]);
		printf("\n");
	}
}

double compute_row_avg(int len, double arr[len])
{
	double total = 0.0;

	for(int i = 0; i < len; i++)
		total += arr[i];

	return total / len;
}

double compute_array_avg(int rows, int cols, double arr[rows][cols])
{
	double total = 0.0;

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			total += *(*(arr + i) + j);
	return total / (rows * cols);
}

double largest_value(int rows, int cols, double arr[rows][cols])
{
	double max = arr[0][0];

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			if(arr[i][j] > max)
				max = arr[i][j];
	return max;
}
