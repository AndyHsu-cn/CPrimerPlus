/*************************************************************
 * File   : 04_07.c                                          *
 * Date   : 2024-06-16                                       *
 *************************************************************/
#include <stdio.h>
#include <float.h>

int main(void)
{
	double db_one_third = 1.0 / 3.0;
	float flt_one_third = 1.0 / 3.0;

	printf("%20s %20s\n", "Float", "Double");
	printf("%20.4f %20.4f\n", flt_one_third, db_one_third);
	printf("%20.12f %20.12f\n", flt_one_third, db_one_third);
	printf("%20.16f %20.16f\n", flt_one_third, db_one_third);
	printf("%20d %20d\n", FLT_DIG, DBL_DIG);
	
	return 0;
}
