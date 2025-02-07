/*	16_16qsorter.c
 *  2025-02-06
 *  modified by Andy Hsu
 * 
 *  using qsort to sort groups of numbers 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM     40
void fill_array(double ar[], int n);
void show_array(const double ar[], int n);
int my_comp(const void * p1, const void * p2);
int main(void)
{
    double vals[NUM];

    srand(time(0));
    fill_array(vals, NUM);
    puts("Random list:");
    show_array(vals, NUM);
    qsort(vals, NUM, sizeof(double), my_comp);
    puts("Sorted list:");
    show_array(vals, NUM);

    return 0;
}

void fill_array(double ar[], int n)
{
    int index;

    for(index = 0; index < n; index++)
        ar[index] = (double)rand() / ((double)rand() + 0.1);

}

void show_array(const double ar[], int n)
{
    int index;

    for(index = 0; index < n; index++)
    {
        printf("%9.4f ", ar[index]);
        if(index % 6 == 5)
            putchar('\n');
    }
    if(index % 6 != 0)
        putchar('\n');
}

int my_comp(const void * p1, const void * p2)
{
    const double * pa1 = (const double *)p1;
    const double * pa2 = (const double *)p2;

    if(*pa1 < *pa2)
        return -1;
    else if(*pa1 == * pa2)
        return 0;
    else
        return 1;
}