/*************************************************************
 * File   : 10_09.c                                          *
 * Date   : 2024-07-12                                       *
 *************************************************************/
#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_2d(int r, int c, const double source[r][c], double target[r][c]);
void print_2d(int r, int c, const double ar[r][c]);
int main(void)
{
	double source[ROWS][COLS] = {
		{5.6, 23.5, 73.2, 12.3, 123.0},
		{4.3, 5.7, 2.1, 6.6, 0.8},
		{22.1, 35.3, 6.35, 0.132, 11.1}
	};
	double target[ROWS][COLS];

	copy_2d(ROWS, COLS, source, target);
	printf("Source array:\n");
	print_2d(ROWS, COLS, source);
	printf("Target array:\n");
	print_2d(ROWS, COLS, target);	
	
	return 0;
}

void copy_2d(int r, int c,const  double source[r][c], double target[r][c])
{
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
			target[i][j] = source[i][j];
}

void print_2d(int r, int c, const double ar[r][c])
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
			printf("%10.3f ", ar[i][j]);
		putchar('\n');
	}	
}
