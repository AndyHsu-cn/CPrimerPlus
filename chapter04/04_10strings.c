/*	04_10strings.c
 *  2025-01-02
 *  modified by Andy Hsu
 * 
 *  string formatting
 */
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("*%2s*\n", BLURB);
    printf("*%24s*\n", BLURB);
    printf("*%24.5s*\n", BLURB);
    printf("*%-24.5s*\n", BLURB);

    return 0;
}