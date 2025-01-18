/*	exe06_15.c
 *  2025-01-17
 *  modified by Andy Hsu
 * 
 *  Daphne invests $100 at 10% simple interest. (That is, every year, the investment
 *  earns an interest equal to 10% of the original investment.) Deirdre invests $100
 *  at 5% interest compounded annually. (That is, interest is 5% of the current
 *  balance, including previous addition of interest.) Write a program that finds how
 *  many years it takes for the value of Deirdre's investment to exceed the value of
 *  Daphne's investment. Also show the two values at that time.
 */
#include <stdio.h>
int main(void)
{
    const double ORIGINAL = 100.0;
    const double interset_daphne = 0.1;
    const double interset_deirdre = 0.05;
    double balance_daphne, balance_deirdre;
    int years = 0;

    balance_daphne = balance_deirdre = ORIGINAL;
    while(balance_daphne >= balance_deirdre)
    {
        balance_daphne += ORIGINAL * interset_daphne;
        balance_deirdre *= (1.0 + interset_deirdre);
        years++;
    }
    printf("After %d years, the value of Deirdre's investment is %.2f"
            ", the value of Daphne's investment is %.2f\n", years, balance_deirdre, balance_daphne);

    return 0;
}