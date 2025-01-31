/*	12_13manydice.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  multiple dice rolls
 *  complie with 12_11diceroll.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12_12diceroll.h"
int main(void)
{
    int dice, roll;
    int sides;

    srand((unsigned int)time(0));
    printf("Enter your number of sides per die, 0 to stop.\n");
    while(scanf("%d", &sides)==1 && sides>0)
    {
        printf("How many dices?\n");
        scanf("%d", &dice);
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
        printf("Enter your number of sides per die, 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}