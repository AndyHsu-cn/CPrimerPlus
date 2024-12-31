/*	03_10escape.c
 *  2024-12-31
 *  modified by Andy Hsu
 * 
 *  uses escape characters
 */
#include <stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, 12.0 * salary);
    printf("\rGee!\n");

    return 0;
}