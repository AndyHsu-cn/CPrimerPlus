/*	04_15input.c
 *  2025-01-05
 *  modified by Andy Hsu
 * 
 *  when to use &
 */
#include <stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favourite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}