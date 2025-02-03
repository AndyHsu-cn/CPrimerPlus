/*	exe14_01.c
 *  2025-02-02
 *  modified by Andy Hsu
 *
 *  Redo review question 3, but make the argument the spelled-out name of the
 *  month instead of the month number. (Don't forget about strcmp().)
 */
#include <stdio.h>
#include <string.h>
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
int main(void)
{
    char input[FULL];
    int tot;
    
    puts("Enter the name of month: ");
    while(gets(input) != NULL && input[0] != '\0')
    {
        if(get_days(input) == 0)
        {
            printf("wrong error! try again: ");
            continue;
        }
        printf("There are %d days in month %s\n", get_days(input), input);
        puts("Enter next name of month: ");
    }
    printf("Done.\n");

    return 0;
}

int get_days(char * month)
{
    int days = 0;
    int i = 0;
    while(*(month + i) != '\0')
    {
        *(month + i) =  tolower(*(month + i));
        i++;
    }   
    for(i = 0; i < 12; i++)
    {
        if(strcmp(months[i].month_name, month) == 0)
            days = months[i].days;
    }
    
    return days;
}