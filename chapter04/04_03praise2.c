/*	04_03praise2.c
 *  2025-01-01
 *  modified by Andy Hsu
 * 
 *  the different between sizeof operator and strlen() function when applied to a string
 */
#include <stdio.h>
#include <string.h>
#define PRAISE "What's a super marvelous name!"
int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s, %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
    printf("The phrase of praise has %zd letters", strlen(PRAISE));
    printf(" and occupies %zd memory cells.\n", sizeof(PRAISE));

    return 0;
}