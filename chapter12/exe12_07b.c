/*	exe12_07b.c.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  multiple dice rolls
 *  complie with exe12_07a.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12_12diceroll.h"
int main(void)
{
    int dice, roll;
    int sides;
    int sets;

    srand((unsigned int)time(0));
    printf("Enter the number of sets; enter q to stop.\n");
    while(scanf("%d", &sets)==1)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d %d", &sides, &dice);
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for(int time = 0; time <sets; time++)
            printf("%4d ", roll = roll_n_dice(dice, sides));
        printf("\n");    
        printf("Enter the number of sets; enter q to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}