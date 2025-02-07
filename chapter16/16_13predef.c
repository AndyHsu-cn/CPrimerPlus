/*	16_13predef.c.c
 *  2025-02-06
 *  modified by Andy Hsu
 * 
 *  predefined identifiers
 */
#include <stdio.h>
void why_me(void);
int main(void)
{
    printf("The file is %s.\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);
    printf("The version is %ld.\n", __STDC_VERSION__);
    printf("This is line %d.\n", __LINE__);
    why_me();

    return 0;
}

void why_me(void)
{
    printf("This function is %s\n", __func__);
    printf("This is line %d.\n", __LINE__);
}