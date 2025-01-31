/*	exe12_02a.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  compile with exe12_02b.c
 */
#include <stdio.h>
#include "exe12_02a.h"
static int mode;
static double distance;
static double fuel_consumed;
void set_mode(int new_mode)
{
    // 0 for metric, 1 for US
    if(new_mode == 0 || new_mode == 1)
    {
        mode = new_mode;
    }else{
        printf("Invalid mode specified. Mode %d(%s) used.\n", mode, mode==0? "metric": "US");
    }
}

void get_info(void)
{
    if(mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel_consumed);
    }else{
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel_consumed);
    }
}

void show_info(void)
{
    if(mode == 0)
        printf("Fuel consumption is %.2f liters per 100 km.\n", 100 * fuel_consumed / distance);
    else
        printf("Fuel consumption is %.1f miles per gallon.\n", distance / fuel_consumed);
}