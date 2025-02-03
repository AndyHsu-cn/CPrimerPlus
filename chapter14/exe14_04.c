/*	exe14_04.c
 *  2025-02-02
 *  modified by Andy Hsu
 * 
 *  Write a program that creates a structure template with two members according to
 *  the following criteria:
 *  a. The first member is a social security number. The second member is a
 *  structure with three members. Its first member contains a first name, its
 *  second member contains a middle name, and its final member contains a
 *  last name. Create and initialize an array of five such structures. Have the
 *  program print the data in this format:
 
    Dribble, Flossie M. -- 302039823

 *  Only the initial letter of the middle name is printed, and a period is added.
 *  Neither the initial (of course) nor the period should be printed if the middle
 *  name member is empty. Write a function to do the printing; pass the
 *  structure array to the function.
 *  b. Modify part "a" by passing the structure value instead of the address
 */
#include <stdio.h>
#include <string.h>
#define MAX     20
struct name
{
    char fname[MAX];
    char mname[MAX];
    char lname[MAX];
};
struct person
{
    char ssn[MAX];
    struct name handle;
};
void show_pointer(const struct person * pstuff, int n);
void show_structure(struct person stuff);
int main(void)
{
    struct person stuff[5] = {
        {"B51414029", {"Jie", "Yu", "Zha"}},
        {"B51414010", {"Xiang", "Xiang", "Pan"}},
        {"B51414025", {"Jie", "Wen", "Jiang"}},
        {"B51414031", {"Ming", "Cheng", "Liu"}},
        {"B51414044", {"Qiang", "", "Sha"}}
    };

    puts("Show by pointer:");
    show_pointer(stuff, 5);
    puts("Show by structure:");
    for(int i = 0; i < 5; i++)
        show_structure(stuff[i]);

    return 0;
}

void show_pointer(const struct person * pstuff, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp((pstuff + i)->handle.mname, "") == 0)
            printf("%s, %s - %s\n", (pstuff + i)->handle.fname, (pstuff->handle.lname), (pstuff + i)->ssn);
        else
            printf("%s, %s %c. - %s\n", (pstuff + i)->handle.fname, (pstuff->handle.lname), *((pstuff->handle.mname)), (pstuff + i)->ssn);
    }
}

void show_structure(struct person stuff)
{
    if(strcmp(stuff.handle.mname, "") == 0)
        printf("%s, %s - %s\n",stuff.handle.fname, stuff.handle.lname, stuff.ssn);
    else
        printf("%s, %s %c. - %s\n", stuff.handle.fname, stuff.handle.lname, *(stuff.handle.mname), stuff.ssn);
}