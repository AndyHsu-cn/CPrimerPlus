/*************************************************************
 * File   : 10_13.c                                          *
 * Date   : 2024-07-13                                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 5
void initial_arr(double (*arr)[COLS], int rows);
void print_2d(double (*arr)[COLS], int rows);
double compute_row_avg(double arr[], int len);
double compute_array_avg(double (*arr)[COLS], int rows);
double largest_value(double (*arr)[COLS], int rows);
int main(void)
{
	double data[ROWS][COLS];

	initial_arr(data, ROWS);
	printf("Initial array:\n");
	print_2d(data, ROWS);
	printf("Row averages:\n");
	for(int i = 0; i < ROWS; i++)
		printf("row[%d] = %5.2f\n", i + 1, compute_row_avg(data[i], COLS));	
	printf("Entire averages: ");
		printf("%5.2f\n", compute_array_avg(data, ROWS));
	printf("Maximum array value: %5.2f\n", largest_value(data, ROWS));

	return 0;
}

void initial_arr(double (*arr)[COLS], int rows)
{
	int i, j;

	srand(time(NULL));
	for(i = 0; i < rows; i++)
		for(j = 0; j < COLS; j++)
			 *(*(arr + i) + j) = (rand() % 10000 + 1) / 100.0;
}

void print_2d(double (*arr)[COLS], int rows)
{
	int i, j;

	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < COLS; j++)
			printf("%5.2f ", *(*(arr + i) + j));
		printf("\n");
	}
}

double compute_row_avg(double arr[], int len)
{
	double total = 0.0;

	for(int i = 0; i < len; i++)
		total += arr[i];

	return total / len;
}

double compute_array_avg(double (*arr)[COLS], int rows)
{
	double total = 0.0;

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < COLS; j++)
			total += *(*(arr + i) + j);
	return total / (rows * COLS);
}

double largest_value(double (*arr)[COLS], int rows)
{
	double max = arr[0][0];

	for(int i = 0; i < rows; i++)
		for(int j = 0; j < COLS; j++)
			if(arr[i][j] > max)
				max = arr[i][j];
	return max;
}
