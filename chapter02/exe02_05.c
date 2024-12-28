/*	exe02_05.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  Write a program that creates an integer variable called toes. Have the program
 *  set toes to 10. Also have the program calculate what twice toes is and what toes
 *  squared is. The program should print all three values, identifying them.
 */
#include <stdio.h>
int main(void)
{
    int toes, toes_twice, toes_square;

    toes = 10;
    toes_twice = toes + toes;
    toes_square = toes * toes;
    printf("toes = %d, twice toes = %d, square toes = %d\n", toes, toes_twice, toes_square);

    return 0;
}