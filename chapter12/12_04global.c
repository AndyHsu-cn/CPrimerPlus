/*	12_04global.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  uses an external variable
 */
#include <stdio.h>
int units = 0;
void critic(void);
int main(void)
{
    extern int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while(units != 56)
        critic();
    printf("You must have look it up!\n");

    return 0;
}

void critic(void)
{
    printf("No luck, chummy, Try again.\n");
    scanf("%d", &units);
}