/*************************************************************
 * File   : 08_07checking.c                                  *
 * Date   : 2024-07-02                                       *
 * Purpose: validating input                                 *
 *************************************************************/
#include <stdio.h>
#include <stdbool.h>
long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
double sum_squares(long start, long stop);
int main(void)
{
	const long MIN = -10000000L;
	const long MAX = +10000000L;
	long start;
	long stop;
	double answer;

	printf("This program computes the sum of the squares of "
	       "integers in a range.\nThe lower bound should not "
	       "be less than -10000000 and \nthe upper bound "
	       "should not be more than +10000000.\nEnter the "
	       "limits (enter 0 for both limits to quit): \n"
	       "lower limit: ");
	start = get_long();
	printf("upper limit: ");
	stop = get_long();
	while(start != 0 || stop != 0)
	{
		if(bad_limits(start, stop, MIN, MAX))
			printf("Please try again.\n");
		else{
			answer = sum_squares(start, stop);
			printf("The sum of squares of the integers "
			       "from %ld to %ld is %g.\n",
				start, stop, answer);	
		}
		printf("Enter the limits (enter 0 for both "
		       "limits to quit):\n");
		printf("lower_limit: ");
		start = get_long();
		printf("upper_limit: ");
		stop = get_long();
	}	
	printf("Done.\n");

	return 0;
}

long get_long(void)
{
	long input;
	char ch;
	while(scanf("%ld", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\nPlease enter an ");
		printf("integer value, such as 25, -178, or 3: ");
	}
	
	return input;
}

bool bad_limits(long begin, long end, long low, long high)
{
	bool not_good = false;

	if(begin > end)
	{
		printf("%ld isn't smaller than %ld.\n", begin, end);
		not_good = true;
	}
	if(begin < low || end > high)
	{
		printf("Values must be %ld or greater.\n", low);
		not_good = true;
	}
	if(begin > high || end > high)
	{
		printf("Values must be %ld or less.\n", high);
		not_good = true;
	}

	return not_good;
}

double sum_squares(long start, long stop)
{
	double total = 0.0;
	long i;

	for(i = start; i <= stop; i++)
		total += i * i;

	return total;
}
