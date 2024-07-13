/*************************************************************
 * File   : 10_02.c                                          *
 * Date   : 2024-07-12                                       *
 *************************************************************/
#include <stdio.h>
#define LENGTH 5
void copy_ptrs(double * target, const double * source_start,const double * source_end);
int main(void)
{
	const double source[LENGTH] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target[3];

	copy_ptrs(target, source + 2, source + 5);
	for(int i = 0; i < 3; i++)
		printf("%.1f ", target[i]);
	putchar('\n');
	
	return 0;
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
