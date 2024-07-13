/*************************************************************
 * File   : 10_11.c                                          *
 * Date   : 2024-07-13                                       *
 *************************************************************/
#include <stdio.h>
#define ROWS 3
#define COLS 5
void print_Nx5(const int (*ar)[COLS] , int rows);
void double_Nx5(int (*ar)[COLS], int rows);
int main(void)
{
	int ar[ROWS][COLS] = {
		{23, 1, 5, 66, 54},
		{2, 5, 6, 9, 1},
		{9, 73, 23, 39, 2}
	};

	printf("Original array:\n");
	print_Nx5(ar, ROWS);
	printf("Doubled array:\n");
	double_Nx5(ar, ROWS);
	print_Nx5(ar, ROWS);

	return 0;
}

void print_Nx5(const int (*ar)[COLS] , int rows)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < COLS; j++)
			printf("%5d ", ar[i][j]);
		printf("\n");
	}
}

void double_Nx5(int (*ar)[COLS], int rows)
{
	for(int i = 0; i < rows; i++)
		for(int j = 0; j < COLS; j++)
			ar[i][j] *= 2;
}
