/*	exe12_01.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Rewrite the program in Listing 12_04global.c so that it does not use global variables.
 */
#include <stdio.h>
void critic(int * num);
int main(void)
{
    int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while(units != 56)
        critic(&units);
    printf("You must have look it up!\n");

    return 0;
}

void critic(int * num)
{
    printf("No luck, chummy, Try again.\n");
    scanf("%d", num);
}