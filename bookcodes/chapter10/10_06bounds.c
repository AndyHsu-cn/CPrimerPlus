/*************************************************************
 * File   : 10_06bounds.c                                    *
 * Date   : 2024-07-09                                       *
 * Purpose: exceed the bounds of an array                    *
 *************************************************************/
#include <stdio.h>
#define SIZE 4
int main(void)
{
	int value1 = 44;
	int arr[SIZE];
	int value2 = 88;
	int i;
	
	printf("value1 = %d, value2 = %d\n", value1, value2);
	// low limit differ from the book -1
	for(i = -3; i <= SIZE; i++)
		arr[i] = 2 * i + 1;
	for(i = -3; i < 7; i++)
		printf("%2d %d\n", i, arr[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("address of arr[-3]: %p\n", &arr[-3]);
	printf("address of arr[-2]: %p\n", &arr[-2]);
	printf("address of arr[4]: %p\n", &arr[4]);
	printf("address of value1: %p\n", &value1);
	printf("address of value2: %p\n", &value2);
	printf("address of i: %p\n", &i);

	return 0;
}
