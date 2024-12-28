/*	exe02_06.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  Write a program that produces the following output:

    Smile!Smile!Smile!
    Smile!Smile!
    Smile!
    
 *  Have the program define a function that displays the string Smile! once, and
 *  have the program use the function as often as needed.
 */
#include <stdio.h>
void print_smile(void);
int main(void)
{
    print_smile();
    print_smile();
    print_smile();
    printf("\n");

    print_smile();
    print_smile();
    printf("\n");

    print_smile();
    printf("\n");

    return 0;
}

void print_smile(void)
{
    printf("Smile!");
}