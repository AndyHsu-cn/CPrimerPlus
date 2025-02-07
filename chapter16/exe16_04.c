/*	exe16_04.c
 *  2025-02-07
 *  modified by Andy Hsu
 * 
 *  The ANSI library features a clock() function with this description:
 *  #include <time.h>
 *  clock_t clock (void);
 *  Here, clock_t is a type defined in time.h. The function returns the processor
 *  time, which is given in some implementation-dependent units. (If the processor
 *  time is unavailable or cannot be represented, the function returns a value of -1.)
 *  However, CLOCKS_PER_SEC, also defined in time.h, is the number of processor
 *  time units per second. Therefore, dividing the difference between two return
 *  values of clock() by CLOCKS_PER_SEC gives you the number of seconds elapsed
 *  between the two calls. Typecasting the values to double before division enables
 *  you to get fractions of a second. Write a function that takes a double argument
 *  representing a desired time delay and then runs a loop until that amount of time
 *  has passed. Write a simple program that tests the function.
 */
#include <stdio.h>
#include <time.h>
void time_delay(double seconds);
int main(void)
{
    double seconds;
    int loop = 0;

    puts("Enter a desired time delay in seconds: ");
    scanf("%lf", &seconds);
    while(1)
    {
        time_delay(seconds);
        loop++;
        printf("loop = %d.\n", loop);
    }

    return 0;
}

void time_delay(double seconds)
{
    clock_t start = clock();

    while(clock() - start <= seconds * CLOCKS_PER_SEC)
        ;
}