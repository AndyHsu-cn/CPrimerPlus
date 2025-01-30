/*	11_18comback.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  strcmp returns
 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("strcmp(\"A\", \"A\") is %d.\n", strcmp("A", "A"));
    printf("strcmp(\"A\", \"C\") is %d.\n", strcmp("A", "C"));
    printf("strcmp(\"C\", \"A\") is %d.\n", strcmp("C", "A"));
    printf("strcmp(\"Z\", \"a\") is %d.\n", strcmp("Z", "a"));
    printf("strcmp(\"apples\", \"apple\") is %d.\n", strcmp("apples", "apple"));
    return 0;
}