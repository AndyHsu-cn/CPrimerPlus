/*	04_06printout.c
 *  2025-01-02
 *  modified by Andy Hsu
 * 
 *  a program that uses some of the conversion specifications.
 */
#include <stdio.h>
#define PI 3.141593
int main(void)
{
    int number = 5;
    float expresso = 13.5;
    int cost = 3100;

    printf("The %d CEOs drank %f cups of expresso.\n", number, expresso);
    printf("The value of PI is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing.\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}