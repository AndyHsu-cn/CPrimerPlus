/*************************************************************************
	> File  : EXE02_06.c
	> Author: Andy Hsu
	> Func  : 定义一个能显示Smile!的函数
*************************************************************************/
#include <stdio.h>
void smile(void);
int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");

    smile();
    smile();
    printf("\n");
    
    smile();
    printf("\n");

    return 0;
}

void smile(void)
{
    printf("Smile!");
}