/*	14_05funds1.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  passing structure members as arguments 
 */
#include <stdio.h>
#define FUNDLEN 50
struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(double x, double y);
int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        3024.72,
        "Lucky's Savings and Loan",
        9237.11
    };
    
    printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));

    return 0;
}

double sum(double x, double y)
{
    return (x + y);
}