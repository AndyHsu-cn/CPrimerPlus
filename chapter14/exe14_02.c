/*	exe14_02.c
 *  2025-02-02
 *  modified by Andy Hsu
 *
 *  Write a program that prompts the user to enter the day, month, and year. The
 *  month can be a month number, a month name, or a month abbreviation. The
 *  program then should return the total number of days in the year up through the
 *  given day.
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define FULL 15
#define ABBRE 4
struct month
{
    char month_name[FULL];
    char abbrev[ABBRE];
    int days;
    int month_no;
};
const struct month months[12] = {
        {"january", "jan", 31, 1},
        {"february", "feb", 28, 2},
        {"march", "mar", 31, 3},
        {"april", "apr", 30, 4},
        {"may", "may", 31, 5},
        {"june", "jun", 30, 6},
        {"july", "jul", 31, 7},
        {"august", "aug", 31, 8},
        {"september", "sep", 30, 9},
        {"october", "oct", 31, 10},
        {"november", "nov", 30, 11},
        {"december", "dec", 31, 12}
};
bool is_leap(int year);
int cal_days(int year, int month, int day);
int main(void)
{
    int year, month, day;
    char cmonth[FULL];
    int i;
    int totals;

    puts("Please enter the year: ");
    while(scanf("%d", &year) == 1)
    {
        puts("Please input the month: ");
        if(scanf("%d", &month) != 1)
        {
            gets(cmonth);
            for(i = 0; i < 12; i++)
            {
                if(strcmp(cmonth, months[i].month_name) == 0 || strcmp(cmonth, months[i].abbrev) == 0)
                    month = months[i].month_no;
            }
        }
        printf("Please input the day: ");
        scanf("%d", &day);
        totals = cal_days(year, month, day);
        totals += (is_leap(year)? 1:0);
        printf("total number of days in the year up through the given day is %d.\n", totals);
        puts("Please enter next year: ");
    }
    printf("Done.\n");

    return 0;
}

bool is_leap(int year)
{
    bool is_leap = false;

    if((year%4==0 && year%100!=0) || (year %400)==0)
        is_leap = true;
    
    return is_leap;
}

int cal_days(int year, int month, int day)
{
    int total = 0;
    int i;

    for(i = 0; i < month - 1; i++)
        total += months[i].days;
    total += day;

    return total;
}