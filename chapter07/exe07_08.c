/*	exe07_08.c
 *  2025-01-20
 *  modified by Andy Hsu
 * 
 *  Modify assumption a. in exe07_07.c so that the program presents a menu of pay
 *  rates from which to choose. Use a switch to select the pay rate. The beginning of
 *  a run should look something like this:

    *****************************************************************
    Enter the number corresponding to the desired pay rate or action:
    1) $8.75/hr 2) $9.33/hr
    3) $10.00/hr 4) $11.20/hr
    5) quit
    *****************************************************************
 
 *  If choices 1 through 4 are selected, the program should request the hours
 *  worked. The program should recycle until 5 is entered. If something other than
 *  choices 1 through 5 is entered, the program should remind the user what the
 *  proper choices are and then recycle. Use #defined constants for the various
 *  earning rates and tax rates.
 */
#include <stdio.h>
void show_menu(void);
#define BASIC_PAY1 8.75
#define BASIC_PAY2 9.33
#define BASIC_PAY3 10.00
#define BASIC_PAY4 11.20
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
    int  choice;
    float hours, basic_pay;
    float gross, taxes, net;

    show_menu();
    while(scanf("%d", &choice) == 1)
    {
        switch(choice)
        {
            case 1:
                basic_pay = BASIC_PAY1;
                break;
            case 2:
                basic_pay = BASIC_PAY2;
                break;
            case 3:
                basic_pay = BASIC_PAY3;
                break;
            case 4:
                basic_pay = BASIC_PAY4;
                break;
            case 5:
                break;
            default:
                printf("%d is illegal, You can only type 1, 2, 3, 4 or 5, try again: ", choice);
                continue;
        }
        if(choice == 5)
            break;
        printf("Enter the hours worked in a week: ");
        scanf("%f", &hours);
        if(hours > OVERTIME)
            hours = OVERTIME + (hours - OVERTIME) * 1.5;
        gross = hours * basic_pay;
        if(gross <= BREAK1)
            taxes = gross * RATE1;
        else if(gross < BREAK2)
            taxes = BASE1 + (gross - BREAK1) * RATE2;
        else
            taxes = BASE2 + (gross - BREAK2) * RATE3;
        net = gross - taxes;
        printf("gross pay: %.2f, taxes = %.2f, net pay = %.2f\n\n", gross, taxes, net);
        show_menu();
    }
    printf("Bye.\n");

    return 0;
}

void show_menu(void)
{
    printf("*****************************************************************\n"
           "Enter the number corresponding to the desired pay rate or action:\n"
           "1) $8.75/hr                      2) $9.33/hr\n"
           "3) $10.00/hr                     4) $11.20/hr\n"
           "5) quit\n"
           "*****************************************************************\n");
}