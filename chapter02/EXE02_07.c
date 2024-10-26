/*************************************************************************
	> File  : EXE02_07.c
	> Author: Andy Hsu
	> Func  : 一个能够数数的程序
*************************************************************************/
#include <stdio.h>
void one_three(void);
void two(void);
int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}