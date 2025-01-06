/*	04_02praise1.c
 *  2025-01-01
 *  modified by Andy Hsu
 * 
 *  how easy it really is to use strings
 */
#include <stdio.h>
#define PRAISE "What's a super marvelous name!"
int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s, %s\n", name, PRAISE);

    return 0;
}