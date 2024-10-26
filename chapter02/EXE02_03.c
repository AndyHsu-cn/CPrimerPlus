/*************************************************************************
	> File  : EXE02_03.c
	> Author: Andy Hsu
	> Func  : 将年龄转换为天数
*************************************************************************/
#include <stdio.h>
int main(void)
{
    int age_year, age_day;

    age_year = 24;
    age_day = age_year * 365;
    printf("Age: %d\n", age_year);
    printf("Day: %d\n", age_day);

    return 0;
}