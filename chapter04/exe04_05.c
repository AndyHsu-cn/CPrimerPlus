/*	exe04_05.c
 *  2024-01-06
 *  modified by Andy Hsu
 * 
 *  Write a program that requests the user's first name and then the user's last
 *  name. Have it print the entered names on one line and the number of letters in
 *  each name on the following line. Align each letter count with the end of the
 *  corresponding name, as in the following:

    Melissa Honeybee
          7        8

 *  Next, have it print the same information, but with the counts aligned with the
 *  beginning of each name.
 * 
    Melissa Honeybee
    7       8
 
 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[20], last_name[20];

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("then your last name: ");
    scanf("%s", last_name);

    printf("%s %s\n", last_name, first_name);
    printf("%*d %*d\n", strlen(last_name), strlen(last_name), strlen(first_name), strlen(first_name));
    printf("%s %s\n", last_name, first_name);
    printf("%-*d %-*d\n", strlen(last_name), strlen(last_name), strlen(first_name), strlen(first_name));

    return 0;
}