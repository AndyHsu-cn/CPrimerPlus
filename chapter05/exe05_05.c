/*	exe05_05.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Change the program 05_13addemup.c, which found the sum of the first
 *  20 integers. (If you prefer, you can think of addemup.c as a program that
 *  calculates how much money you get in 20 days if you receive $1 the first day, $2
 *  the second day, $3 the third day, and so on.) Modify the program so that you can
 *  tell it interactively how far the calculation should proceed. That is, replace the 20
 *  with a variable that is read in.
 */
#include <stdio.h>
int main(void)
{
    int count, sum;             // declaration statement
    int num;

    count = 0;                  // assignment statement
    sum = 0;
    printf("How far the calculation should proceed: ");
    scanf("%d", &num);
    while(count++ < num)
        sum = sum + count;      // while statement
    printf("sum = %d\n", sum);  // function statement

    return 0;
}