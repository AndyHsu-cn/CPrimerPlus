/*	exe05_01.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Write a program that converts time in minutes to time in hours and minutes. Use
 *  #define or const to create a symbolic constant for 60. Use a while loop to allow
 *  the user to enter values repeatedly and terminate the loop if a value for the time
 *  of 0 or less is entered.
 */
#include <stdio.h>
int main(void)
{
    const int M_PER_H = 60;         // minutes in an hour
    int min_input;           
    int hour, min;

    printf("This program that converts time in minutes to time in hours and minutes.\n");
    printf("Enter time in minutes (<= 0 to quit): ");
    scanf("%d", &min_input);
    while(min_input > 0)
    {
        hour = min_input / M_PER_H;
        min = min_input % M_PER_H;
        printf("%d minutes is %d hours and %d minutes.\n", min_input, hour, min);
        printf("Enter next time in minutes (<= 0 to quit): ");
        scanf("%d", &min_input);
    }
    printf("Done.\n");

    return 0;
}