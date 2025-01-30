/*	11_14str_cat.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  joins two strings
 */
#include <stdio.h>
#include <string.h>
#define SIZE    80
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    
    puts("What is your favorite flower?");
    // fgets(flower, SIZE, stdin);
    gets(flower);
    strcat(flower, addon);
    // fputs(flower, stdout);
    // fputs(addon, stdout);
    puts(flower);
    puts(addon);

    return 0;
}