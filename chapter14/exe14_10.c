/*	exe14_10.c
 *  2025-02-05
 *  modified by Andy Hsu
 * 
 *  Write a program that implements a menu by using an array of pointers to
 *  functions. For instance, choosing a from the menu would activate the function
 *  pointed to by the first element of the array.
 */
#include <stdio.h>
#include <string.h>
#define NUM     4
int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int showmenu(void);
int main(void)
{
    int(*(pfs[NUM]))(int a, int b) = {add, substract, multiply, divide};
    int(*pf)(int a, int b);
    int ind;
    char choice;
    int a, b;

    printf("Enter 2 number:\n");
    scanf("%d %d", &a, &b);
    getchar();
    while((choice = showmenu()) && choice != 'q')
    {
        switch(choice)
        {
            case 'a':
                ind = 0;
                break;
            case 's':
                ind = 1;
                break;
            case 'm':
                ind = 2;
                break;
            case 'd':
                ind = 3;
                break;
            default:
                printf("Error input.\n");
                break;
        }
        pf = pfs[ind];
        printf("The result is %d\n", pf(a, b));
    }
    printf("Bye!\n");

    return 0;
}

int add(int a, int b)
{
    return (a + b);
}

int substract(int a, int b)
{
    return (a - b);
}
int multiply(int a, int b)
{
    return (a * b);
}
int divide(int a, int b)
{
    if(b == 0)
    {
        printf("enter a number except 0: ");
        while(scanf("%d", &b)!=1 || b==0)
        {
            while(getchar() != '\n')
                ;
        }
        getchar();
    }

    return (a / b);
}

int showmenu(void)
{
    int choice;

    printf("Enter a choice:\n");
    printf("a) add       s) substract\n");
    printf("m) multiply  d) divide\n");
    printf("q) quit\n");
    while((choice = getchar()) != EOF && strchr("asmdq", choice) == NULL)
    {
        while(getchar() != '\n')
            ;
        printf("Only accept a, s, m, d or q, try again: ");
    }
    while(getchar() != '\n')
        ;

    return choice;
}