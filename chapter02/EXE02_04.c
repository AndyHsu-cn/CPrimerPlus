/*************************************************************************
	> File  : EXE02_04.c
	> Author: Andy Hsu
	> Func  : 输出夸奖信息和否认信息
*************************************************************************/
#include <stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}