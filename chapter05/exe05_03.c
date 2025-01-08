/*	exe05_03.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to enter the number of days and then
 *  converts that value to weeks and days. For example, it would convert 18 days to
 *  2 weeks, 4 days. Display results in the following format:

    18 days are 2 weeks, 4 days.

 *  Use a while loop to allow the user to repeatedly enter day values; terminate the
 *  loop when the user enters a nonpositive value, such as 0 or -20.
 */
#include <stdio.h>
int main(void)
{
    int input;
    int week, day;

    printf("Enter the number of days (<= 0 to quit): ");
    scanf("%d", &input);
    while(input > 0)
    {
        week = input / 7;
        day = input % 7;
        printf("%d days are %d weeks, %d days.\n", input, week, day);
        printf("Enter the next number of days (<= 0 to quit): ");
        scanf("%d", &input);
    }
    printf("Done.\n");

    return 0;
}