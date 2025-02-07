/*	exe16_06.c
 *  2025-02-07
 *  modified by Andy Hsu
 * 
 *  Modify 16_16qsorter.c so that it uses an array of struct names elements (as
 *  defined after the listing) instead of an array of double. Use fewer elements, and
 *  initialize the array explicitly to a suitable selection of names.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM     40
typedef struct name_ct{
    char first[NUM];
    char last[NUM];
} NAME;
void show_array(NAME stu[], int n);
int my_comp(const void * p1, const void * p2);
int main(void)
{
    NAME students[] = {
        {"Amy", "Poehler"},
		{"Phyllis", "Smith"},
		{"Richard", "Kind"},
		{"Bill", "Hader"},
		{"Lewis", "Black"},
		{"Mindy", "Kaling"},
		{"Kaitlyn", "Dias"},
		{"Diane", "Lane"},
		{"Kyle", "MacLachlan"},
		{"Paula", "Poundstone"},
		{"Bobby", "Moynihan"},
		{"Paula", "Pell"},
		{"Dave", "Goelz"},
		{"Frank", "Oz"},
		{"Josh", "Cooley"},
    };

    puts("Original list:");
    show_array(students, sizeof(students) / sizeof(students[0]));
    qsort(students, sizeof(students) / sizeof(students[0]), sizeof(students[0]), my_comp);
    puts("Sorted list:");
    show_array(students, sizeof(students) / sizeof(students[0]));

    return 0;
}

void show_array(NAME stu[], int n)
{
    int index;

    for(index = 0; index < n; index++)
        printf("%s, %s\n", stu[index].first, stu[index].last);
}

int my_comp(const void * p1, const void * p2)
{
    const NAME * pa = (const NAME *)p1;
    const NAME * pb = (const NAME *)p2;

    if(strcmp(pa->first, pb->first) != 0)
        return strcmp(pa->first, pb->first);
    else
        return strcmp(pa->last, pb->last);
}