/*	02_02fathm_ft.c
 *  2024-12-28
 *  modified by Andy Hsu
 * 
 *  converts 2 fathoms to feet
 */
#include <stdio.h>
int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, i said %d feet!\n", 6 * fathoms);

    return 0;
}