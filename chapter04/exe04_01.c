/*	exe04_01.c
 *  2025-01-05
 *  modified by Andy Hsu
 * 
 *  Write a program that asks for your first name, your last name, and then prints
 *  the names in the format last, first.
 */
#include <stdio.h>
int main(void)
{
    char first_name[20];
    char last_name[20];

    printf("What's your first name: ");
    scanf("%s", first_name);
    printf("What's your last name: ");
    scanf("%s", last_name);
    printf("%s, %s\n", last_name, first_name);

    return 0;
}