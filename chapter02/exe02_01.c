/*	exe02_01.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  Write a program that uses one printf() call to print your first name and last
 *   name on one line, uses a second printf() call to print your first and last names
 *   on two separate lines, and uses a pair of printf() calls to print your first and last
 *   names on one line. The output should look like this (but using your name):

    Anton Bruckner              First print statement
    Anton                       Second print statement
    Bruckner                    Still the second print statement
    Anton Bruckner              Third and fourth print statements
 
 */
#include <stdio.h>
int main(void)
{
    printf("Anton Bruckner\n");
    printf("Anton\nBruckner\n");
    printf("Anton ");
    printf("Bruckner\n");

    return 0;
}