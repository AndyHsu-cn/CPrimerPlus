/*	exe14_05.c
 *  2025-02-02
 *  modified by Andy Hsu
 * 
 *  Write a program that fits the following recipe:
 *  a. Externally define a name structure template with two members: a string to
 *  hold the first name and a string to hold the second name.
 *  b. Externally define a student structure template with three members: a 
 *  name structure, a grade array to hold three floating-point scores, and a
 *  variable to hold the average of those three scores.
 *  c. Have the main() function declare an array of CSIZE (with CSIZE = 4)
 *  student structures and initialize the name portions to names of your
 *  choice. Use functions to perform the tasks described in parts "d," "e," "f,"
 *  and "g."
 *  d. Interactively acquire scores for each student by prompting the user with a
 *  student name and a request for scores. Place the scores in the grade array
 *  portion of the appropriate structure. The required looping can be done in
 *  main() or in the function, as you prefer.
 *  e. Calculate the average score value for each structure and assign it to the
 *  proper member.
 *  f. Print the information in each structure.
 *  g. Print the class average for each of the numeric structure members.
 */
#include <stdio.h>
#include <string.h>
#define MAX     20
#define SUBJECT 3
#define CSIZE   4
struct name
{
    char fname[MAX];
    char lname[MAX];
};
struct student
{
    struct name handle;
    double grade[SUBJECT];
    double avg;
};
void get_score(struct student students[], int num);
void get_avg(struct student students[], int num);
void print_info(const struct student sutdents[], int num);
void print_all_avg(const struct student students[], int num);
int main(void)
{
    struct student studetns[CSIZE] = {
        {{"Zha", "Yujie"}, {0, 0, 0}, 0},
        {{"Jiang", "Wenjie"}, {0, 0, 0}, 0},
        {{"Liu", "Chengming"}, {0, 0, 0}, 0},
        {{"Pan", "Xiangxiang"}, {0, 0, 0}, 0}
    };
    int i;

    get_score(studetns, CSIZE);
    get_avg(studetns, CSIZE);
    print_info(studetns, CSIZE);
    print_all_avg(studetns, CSIZE);

    return 0;
}

void get_score(struct student students[], int num)
{
    int i, j;

    for(i = 0; i < num; i++)
    {
        printf("Input the scores of 3 courses for %s %s\n",  students[i].handle.fname, students[i].handle.lname);
        for ( j = 0; j < SUBJECT; j++)
            scanf("%lf", &students[i].grade[j]);
    } 
}

void get_avg(struct student students[], int num)
{
    int i, j;
    double tot;

    for(i = 0; i < num; i++)
    {
        tot = 0.0;
        for ( j = 0; j < SUBJECT; j++)
            tot += students[i].grade[j];
        students[i].avg = tot / SUBJECT;
    } 
}

void print_info(const struct student sutdents[], int num)
{
    int i, j;

    for(i = 0; i < num; i++)
    {
        char name[2 * MAX];
        strcpy(name, sutdents[i].handle.fname);
        strcat(name, " ");
        strcat(name, sutdents[i].handle.lname);

        if(i == 0)
            printf("%20s %8s %8s %8s %8s\n", "student name", "chinese", "math", "english", "avg");
        printf("%20s %8.2f %8.2f %8.2f %8.2f\n", name, sutdents[i].grade[0], sutdents[i].grade[1], sutdents[i].grade[2], sutdents[i].avg);
    }
}

void print_all_avg(const struct student students[], int num)
{
    int i, j;

    printf("%20s ", "average");
    for(j = 0; j < SUBJECT; j++)
    {
        double tot = 0.0;

        for(i = 0; i < num; i++)
            tot += students[i].grade[j];
        printf("%8.2f ", tot / num);
    }
    printf("\n");
}