/*	exe16_03.c
 *  2025-02-07
 *  modified by Andy Hsu
 * 
 *  Polar coordinates describe a vector in terms of magnitude and the
 *  counterclockwise angle from the x-axis to the vector. Rectangular coordinates
 *  describe the same vector in terms of x and y components (see Figure 16.3). Write
 *  a program that reads the magnitude and angle (in degrees) of a vector and then
 *  displays the x and y components. The relevant equations are these:
 *  x = r cos A y = r sin A
 *  To do the conversion, use a function that takes a structure containing the polar 
 *  coordinates and returns a structure containing the rectangular coordinates (or use
 *  pointers to such structures, if you prefer).
 */
#include <stdio.h>
#include <math.h>
typedef struct polar_v
{
    double magnitude;
    double angle;
} POLAR_V;
typedef struct rect_v
{
    double x;
    double y;
} RECT_V;
RECT_V polar_to_rect(const POLAR_V * ppv);
int main(void)
{
    POLAR_V input;
    RECT_V result;

    puts("the magnitude and angle (in degrees) of a vector:");
    while(scanf("%lf %lf", &input.magnitude, &input.angle) == 2)
    {
        result = polar_to_rect(&input);
        printf("Rectangular coordinate(x, y) is (%.2f, %.2f).\n", result.x, result.y);
    }
    puts("Bye.");

    return 0;
}

RECT_V polar_to_rect(const POLAR_V * ppv)
{
    RECT_V rv;
    
    rv.x = ppv->magnitude * cos(ppv->angle);
    rv.y = ppv->magnitude * sin(ppv->angle);

    return rv;
}
