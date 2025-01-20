/*	07_10break.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  uses break to exit a loop
 */
#include <stdio.h>
int main(void)
{
    float length, width;

    printf("Enter the length of the rectangele:\n");
    while(scanf("%f", &length) == 1)
    {
        printf("length = %0.2f\n", length);
        printf("Enter its width:\n");
        if(scanf("%f", &width) != 1)
            break;
        printf("width = %0.2f\n", width);
        printf("area = %0.2f\n", length * width);
        printf("Enter the length of the rectangele:\n");
    }
    printf("Done.\n");

    return 0;
}