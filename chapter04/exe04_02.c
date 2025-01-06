/*	exe04_02.c
 *  2024-01-05
 *  modified by Andy Hsu
 * 
 *  Write a program that requests your first name and does the following with it:
 *  a. Prints it enclosed in double quotation marks
 *  b. Prints it in a field 20 characters wide, with the whole field in quotes
 *  c. Prints it at the left end of a field 20 characters wide, with the whole field
 *     enclosed in quotes
 *  d. Prints it in a field three characters wider than the name
 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[20];
    int len;

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("a. \"%s\"\n", first_name);
    printf("b. \"%20s\"\n", first_name);
    printf("c. \"%-20s\"\n", first_name);
    len = strlen(first_name) + 3;
    printf("d. \"%*s\"\n", len, first_name);

    return 0;
}