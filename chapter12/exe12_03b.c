/*	 exe12_03b.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Gasoline consumption commonly is computed in miles per gallon in the U.S. and
 *  in liters per 100 kilometers in Europe. What follows is part of a program that asks
 *  the user to choose a mode (metric or U.S.) and then gathers data and computes
 *  fuel consumption:
 *  // pe12-2b.c
 *  #include <stdio.h>
 *  #include "pe12-2a.h"
 *  int main(void)
 *  {
 *  int mode;
 *  printf("Enter 0 for metric mode, 1 for US mode: ");
 *  scanf("%d", &mode);
 *  while (mode >= 0)
 *  {
 *  set_mode(mode);
 *  get_info();
 *  show_info();
 *  printf("Enter 0 for metric mode, 1 for US mode");
 *  printf(" (-1 to quit): ");
 *  scanf("%d", &mode);
 *  }
 *  printf("Done.\n");
 *  return 0;
 *  }
 *  Here is some sample output:
    Enter 0 for metric mode, 1 for US mode: 0
    Enter distance traveled in kilometers: 600
    Enter fuel consumed in liters: 78.8
    Fuel consumption is 13.13 liters per 100 km.
    Enter 0 for metric mode, 1 for US mode (-1 to quit): 1
    Enter distance traveled in miles: 434
    Enter fuel consumed in gallons: 12.7
    Fuel consumption is 34.2 miles per gallon.
    Enter 0 for metric mode, 1 for US mode (-1 to quit): 3
    Invalid mode specified. Mode 1(US) used.
    Enter distance traveled in miles: 388
    Enter fuel consumed in gallons: 15.3
    Fuel consumption is 25.4 miles per gallon.
    Enter 0 for metric mode, 1 for US mode (-1 to quit): -1
    compile with exe12_03a.c
 */

#include <stdio.h>
#include "exe12_03a.h"
int main(void)
{
   int mode, mode_tmp;
   double distance;
   double fuel_consumed;

   printf("Enter 0 for metric mode, 1 for US mode: ");
   scanf("%d", &mode_tmp);
   while (mode_tmp >= 0)
   {
      set_mode(mode_tmp, &mode);
      get_info(mode, &distance, &fuel_consumed);
      show_info(mode, distance, fuel_consumed);
      printf("Enter 0 for metric mode, 1 for US mode");
      printf(" (-1 to quit): ");
      scanf("%d", &mode_tmp);
   }
   printf("Done.\n");
   return 0;
}