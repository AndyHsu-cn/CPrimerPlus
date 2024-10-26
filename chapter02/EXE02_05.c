/*************************************************************************
	> File  : EXE02_05.c
	> Author: Andy Hsu
	> Func  : 计算一个整数的两倍以及该整数的平方
*************************************************************************/
#include <stdio.h>
int main(void)
{
    int toes;
    int toes_dbl, toes_square;

    toes = 10;
    toes_dbl = 2 * toes;
    toes_square = toes * toes;
    printf("toes = %d, 2 * toes = %d, toes square = %d\n", toes, toes_dbl, toes_square);

    return 0;
}