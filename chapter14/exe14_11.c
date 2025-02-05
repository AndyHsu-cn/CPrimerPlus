/*	exe14_11.c
 *  2025-02-05
 *  modified by Andy Hsu
 * 
 *  Write a function called transform() that takes four arguments: the name of a
 *  source array containing type double data, the name of a target array of type
 *  double, an int representing the number of array elements, and the name of a
 *  function (or, equivalently, a pointer to a function). The transform() function
 *  should apply the indicated function to each element in the source array, placing
 *  the return value in the target array. For example, the call
 *  transform(source, target, 100, sin);
 *  would set target[0] to sin(source[0]), and so on, for 100 elements. Test the
 *  function in a program that calls transform() four times, using two functions from
 *  the math.h library and two suitable functions of your own devising as arguments
 *  to successive calls of the transform() function.
 */
#include <stdio.h>
#include <math.h>
#define NUM 100
double square(double x);
double cube(double x);
void transform(const double src[], double target[], int num, double(*pf)(double x));
void showarr(double arr[], int num);
int main(void)
{
    double src[NUM], target[NUM];
    int i;

    for(i = 0; i < NUM; i++)
        src[i] = i;
    printf("sin(x):\n");
    transform(src, target, NUM, sin);
    showarr(target, NUM);
    printf("cos(x):\n");
    transform(src, target, NUM, cos);
    showarr(target, NUM);
    printf("square(x):\n");
    transform(src, target, NUM, square);
    showarr(target, NUM);
    printf("cube(x):\n");
    transform(src, target, NUM, cube);
    showarr(target, NUM);

    return 0;
}

double square(double x)
{
    return (x * x);
}

double cube(double x)
{
    return (x * x * x);
}

void transform(const double src[], double target[], int num, double(*pf)(double x))
{
    int i;

    for(i = 0; i < num; i++)
        target[i] = (*pf)(src[i]);
}

void showarr(double arr[], int num)
{
    int i;

    for(i = 0; i < num; i++)
    {
        printf("%10.2f ", arr[i]);
        if(i %10 == 9)
            printf("\n");
    }
    printf("\n");
}