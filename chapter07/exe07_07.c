/*	exe07_07.c
 *  2025-01-20
 *  modified by Andy Hsu
 * 
 *  Write a program that requests the hours worked in a week and then prints the
 *  gross pay, the taxes, and the net pay. Assume the following:
 *  a. Basic pay rate = $10.00/hr
 *  b. Overtime (in excess of 40 hours) = time and a half
 *  c. Tax rate: 15% of the first $300
 *  20% of the next $150
 *  25% of the rest
 *  Use #define constants, and don't worry if the example does not conform to
 *  current tax law.
 */
#include <stdio.h>
#define BASIC_PAY 10.0
#define OVERTIME 40.0
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BASE1 (BREAK1 * RATE1)
#define BASE2 (BASE1 + (BREAK2 - BREAK1) * RATE2)
int main(void)
{
    float hours;
    float gross, taxes, net;

    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours);
    if(hours > OVERTIME)
        hours = OVERTIME + (hours - OVERTIME) * 1.5;
    gross = BASIC_PAY * hours;
    if(gross <= BREAK1)
        taxes = gross * RATE1;
    else if(gross < BREAK2)
        taxes = BASE1 + (gross - BREAK1) * RATE2;
    else
        taxes = BASE2 + (gross - BREAK2) * RATE3;
    net = gross - taxes;
    printf("gross pay: %.2f, taxes = %.2f, net pay = %.2f\n", gross, taxes, net);

    return 0;
}