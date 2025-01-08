/*	exe05_06.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Now modify the program of Programming Exercise 5 so that it computes the sum
 *  of the squares of the integers. (If you prefer, how much money you receive if you
 *  get $1 the first day, $4 the second day, $9 the third day, and so on. This looks
 *  like a much better deal!) C doesn't have a squaring function, but you can use the
 *  fact that the square of n is n * n.
 */
#include <stdio.h>
int main(void)
{
    int count, sum;                     // declaration statement
    int num;

    count = 0;                          // assignment statement
    sum = 0;
    printf("How far the calculation should proceed: ");
    scanf("%d", &num);
    while(count++ < num)
        sum = sum + count * count;      // while statement
    printf("sum = %d\n", sum);          // function statement

    return 0;
}