/*************************************************************
 * File   : 10_02.c                                          *
 * Date   : 2024-07-11                                       *
 *************************************************************/
#include <stdio.h>
#define LENGTH 5
void copy_arr(double target[],const double source[], int arr_len);
void copy_ptr(double * target, const double * source, int arr_len);
void copy_ptrs(double * target, const double * source_start,const double * source_end);
int main(void)
{
	const double source[LENGTH] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LENGTH];
	double target2[LENGTH];
	double target3[LENGTH];

	copy_arr(target1, source, LENGTH);
	copy_ptr(target2, source, LENGTH);
	copy_ptrs(target3, source, source + LENGTH);
	printf("%15s|%15s|%15s\n", "target1", "target2", "target3");
	for(int i = 0; i < LENGTH; i++)
		printf("%15.3f|%15.3f|%15.3f\n", target1[i], target2[i], target3[i]);

	return 0;
}

void copy_arr(double target[], const double source[], int arr_len)
{
	for(int i = 0; i< arr_len; i++)
		target[i] = source[i];
}

void copy_ptr(double * target, const double * source, int arr_len)
{
	for(int i = 0; i < arr_len; i++)
		*(target + i) = *(source + i);
}

void copy_ptrs(double * target, const double * source_start, const double * source_end)
{
	while(source_start < source_end)
	{	
		*target = *source_start;
		source_start++;
		target++;
	}
}
