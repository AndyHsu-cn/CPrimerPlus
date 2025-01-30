/*	exe11_12.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a program that echoes the command-line arguments in reverse word order.
 *  That is, if the command-line arguments are see you later, the program should
 *  print later you see.
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;

    for(i = argc - 1; i > 0; i--)
        printf("%s ", argv[i]);
    printf("\n");

    return 0;
}
