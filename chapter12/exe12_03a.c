/*	exe12_03a.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  compile with exe12_03b.c
 */
#include <stdio.h>
#include "exe12_03a.h"
void set_mode(int new_mode, int * pmode)
{
    // 0 for metric, 1 for US
    if(new_mode == 0 || new_mode == 1)
    {
        *pmode = new_mode;
    }else{
        printf("Invalid mode specified. Mode %d(%s) used.\n", *pmode, *pmode==0? "metric": "US");
    }
}

void get_info(int mode, double * pdistance, double * pfuel_consumed)
{
    if(mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", pdistance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", pfuel_consumed);
    }else{
        printf("Enter distance traveled in miles: ");
        scanf("%lf", pdistance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", pfuel_consumed);
    }
}

void show_info(int mode, double distance, double fuel_consumed)
{
    if(mode == 0)
        printf("Fuel consumption is %.2f liters per 100 km.\n", 100 * fuel_consumed / distance);
    else
        printf("Fuel consumption is %.1f miles per gallon.\n", distance / fuel_consumed);
}