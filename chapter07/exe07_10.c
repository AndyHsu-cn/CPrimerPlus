/*	exe07_10.c
 *  2025-01-20
 *  modified by Andy Hsu
 * 
 *  The 1988 United States Federal Tax Schedule was the simplest in recent times. It
 *  had four categories, and each category had two rates. Here is a summary (dollar
 *  amounts are taxable income):
 *  Category Tax
 *  Single 15% of first $17,850 plus 28% of excess
 *  Head of Household 15% of first $23,900 plus 28% of excess
 *  Married, Joint 15% of first $29,750 plus 28% of excess
 *  Married, Separate 15% of first $14,875 plus 28% of excess
 *  For example, a single wage earner with a taxable income of $20,000 dollars owes
 *  0.15 x $17,850 + 0.28 x ($20,000–$17,850). Write a program that lets the user
 *  specify the tax category and the taxable income and that then calculates the tax.
 *  Use a loop so that the user can enter several tax cases
 */
#include <stdio.h>
#define BREAK1 17850
#define BREAK2 23900
#define BREAK3 29750
#define BREAK4 14875
#define RATE1 0.15
#define RATE2 0.28
void show_menu(void);
int main(void)
{
    int choice;
    float income, tax_break, tax;

    show_menu();
    while(scanf("%d", &choice) == 1)
    {
        switch(choice)
        {
            case 1:
                tax_break = BREAK1;
                break;
            case 2:
                tax_break = BREAK2;
                break;
            case 3:
                tax_break = BREAK3;
                break;
            case 4:
                tax_break = BREAK4;
                break;
            default:
                printf("%d is illegal, Type 1, 2, 3, 4 or q to quit: ", choice);
                continue;
        }
        printf("Now the taxable income: ");
        scanf("%f", &income);
        if(income <= tax_break)
            tax = income * RATE1;
        else
            tax = tax_break * RATE1 + (income - tax_break) * RATE2;
        printf("Your tax is %.2f\n\n", tax);
        show_menu();
    }
    printf("Bye.\n");

    return 0;
}

void show_menu(void)
{
    printf("Please specify the tax category: \n");
    printf("1) Single            2) Head of Household\n");
    printf("3) Married, Joint    4) Married Separate\n");
}