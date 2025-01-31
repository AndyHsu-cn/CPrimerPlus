/*	 exe12_07a.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a program that behaves like the modification of 12_13manydice, which we
 *  discussed after showing the output of 12_13manydice. That is, have the program
 *  produce output like the following:

    Enter the number of sets; enter q to stop.
    18
    How many sides and how many dice?
    6 3
    Here are 18 sets of 3 6-sided throws.
    12 10 6 9 8 14 8 15 9 14 12 17 11 7 10
    13 8 14
    How many sets? Enter q to stop.
    q

 *  complie with exe12_07b.c
 */
#include <stdio.h>
#include <stdlib.h>
#include "exe12_07a.h"
int roll_count = 0;

static int rollem(int sides)
{
    int roll;

    roll = rand() %sides + 1;
    ++roll_count;

    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;

    if(sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if(dice < 1)
    {
        printf("Need at least 1 die.\n");
        return -1;
    }
    for(d = 0; d < dice; d++)
        total += rollem(sides);

    return total;
}