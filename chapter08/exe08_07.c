/*	exe08_07.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Modify exercise 8 from Chapter 7 so that the menu choices are labeled by
 *  characters instead of by numbers.
 */
#include <stdio.h>
#include <ctype.h>
void show_menu(void);
char get_first(void);
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
    while((choice = get_first()) != 'q')
    {
        switch(choice)
        {
            case 'a':
                basic_pay = BASIC_PAY1;
                break;
            case 'b':
                basic_pay = BASIC_PAY2;
                break;
            case 'c':
                basic_pay = BASIC_PAY3;
                break;
            case 'd':
                basic_pay = BASIC_PAY4;
                break;
            default:
                printf("%c is illegal, You can only type a, b, c, d or q, try again: ", choice);
                continue;
        }
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
           "a) $8.75/hr                      b) $9.33/hr\n"
           "c) $10.00/hr                     d) $11.20/hr\n"
           "q) quit\n"
           "*****************************************************************\n");
}

char get_first(void)
{
    char ch;

    while(!isalpha(ch = getchar()))
        continue;
    while(getchar() != '\n')
        continue;

    return ch;
}