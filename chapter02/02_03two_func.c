/*************************************************************************
	> File  : 02_02fathm_ft.c
	> Author: Andy Hsu
	> Func  : 在一个文件中使用两个函数 
*************************************************************************/
#include <stdio.h>
void butler(void);      // ANSI C 函数原型
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, Bring me some tea and writeable CD-ROMS.\n");

    return 0;
}

void butler(void)       // 函数定义的开始
{
    printf("You rang, sir?\n");
}