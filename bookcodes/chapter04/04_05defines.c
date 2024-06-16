/*************************************************************
 * File   : 04_05defines.c                                   *
 * Date   : 2024-06-14                                       *
 * Purpose: uses defined constants from limits.h and float.h *
 *************************************************************/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("Smallest normal double: %e\n", DBL_MIN); //added by andy
	printf("float precision = %d digits\n", FLT_DIG);
	printf("double precision = %d digits\n", DBL_DIG);// added by andy
	printf("float epsilon = %e\n", FLT_EPSILON);
	printf("double epsilon = %e\n", DBL_EPSILON);

	return 0;
}
