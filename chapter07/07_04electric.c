/*	07_04electric.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  calculates electric bill 
 */
#include <stdio.h>
#define RATE1 0.12589       // rate for first 360 kwh
#define RATE2 0.17901       // rate for next 320 kwh
#define RATE3 0.20971       // rate for over 680 kwh
#define BREAK1 360.0
#define BREAK2 680.0
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
int main(void)
{
    double kwh;
    double bill;

    printf("Enter the kwh use.\n");
    scanf("%lf", &kwh);
    if(kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if(kwh <= BREAK2)
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else
        bill = BASE2 * (RATE3 * (kwh - BREAK2));
    printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);

    return 0;
}