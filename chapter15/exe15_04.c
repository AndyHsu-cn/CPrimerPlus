/*	exe15_04.c
 *  2025-02-08
 *  modified by Andy Hsu
 * 
 *  Write a function that takes two int arguments: a value and a bit position. Have
 *  the function return 1 if that particular bit position is 1, and have it return 0
 *  otherwise. Test the function in a prog
 */
#include <stdio.h>
int checkbit(int value, int position);
int main(void)
{
    int number, pos;

    printf("Enter a number and a position(0 - %zd):  ", sizeof(int) * 8 - 1);
    scanf("%d %d", &number, &pos);
    printf("Particular bit position %d in %d is %d.\n", pos, number, checkbit(number, pos));

    return 0;
}

int checkbit(int value, int position)
{
    value >>= position;

    return (value & 0x1);
}