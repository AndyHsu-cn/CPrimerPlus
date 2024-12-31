/*	03_02print1.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  presents a simple program that initializes a variable and prints the value of
 *  the variable, the value of a constant, and the value of a simple expression. It
 *  also shows what can happen if you are not careful.
 */
#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);                     // forgot 2 arguments

    return 0;
}