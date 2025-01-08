/*	exe05_04.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to enter a height in centimeters and then
 *  displays the height in centimeters and in feet and inches. Fractional centimeters
 *  and inches should be allowed, and the program should allow the user to continue
 *  entering heights until a nonpositive value is entered. A sample run should look
 *  like this:
    
    Enter a height in centimeters: 182
    182.0 cm = 5 feet, 11.7 inches
    Enter a height in centimeters (<=0 to quit): 168
    168.0 cm = 5 feet, 6.1 inches
    Enter a height in centimeters (<=0 to quit): 0
    bye

 */
#include <stdio.h>
int main(void)
{
    const float IN_PER_CM = 0.39370;
    const int IN_PER_FT = 12;
    float height_cm;
    int height_feet;
    float height_inch;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height_cm);
    while(height_cm > 0)
    {
        height_inch = height_cm * IN_PER_CM;
        height_feet = height_inch / IN_PER_FT;
        height_inch -= height_feet * IN_PER_FT * IN_PER_CM;
        printf("%.1f cm = %d feet, %.1f inches.\n", height_cm, height_feet, height_inch);
        printf("Enter a height in centimeters: ");
        scanf("%f", &height_cm);
    }
    printf("bye\n");

    return 0;
}