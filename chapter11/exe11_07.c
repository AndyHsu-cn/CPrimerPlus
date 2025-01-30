/*	exe11_07.c
 *  2025-01-29
 *  modified by Andy Hsu
 * 
 *  Write a function called string_in() that takes two string pointers as arguments.
 *  If the second string is contained in the first string, have the function return the
 *  address at which the contained string begins. For instance, string_in("hats",
 *  "at") would return the address of the a in hats. Otherwise, have the function
 *  return the null pointer. Test the function in a complete program that uses a loop
 *  to provide input values for feeding to the function.
 */
#include <stdio.h>
#include <string.h>
#define MAX 20
char * string_in(char * parent, char * child);
int main(void)
{
    char parent[MAX];
    char child[MAX];
    char * res;

    printf("Enter the parent string (empty line to quit): ");
    while(gets(parent) && parent[0] != '\0')
    {
        printf("Enter the child string (empty line to quit): ");
        gets(child);
        res = string_in(parent, child);
        printf("parent = %s(%p)\nchild = %s(%p)\n", parent, parent, child, child);
        if(res)
        {
            printf("%s begins at (%p)%s\n", child, res, res);
        }else
            printf("%s is not in %s\n", child, parent);
        printf("Enter next parent string (empty line to quit): ");
    }
    printf("Bye.\n");

    return 0;
}

char * string_in(char * parent, char * child)
{
    char * res = NULL;
    int i, j;

    for(i = 0; !res && i < strlen(parent) - strlen(child) + 1; i++)
    {
        for(j = 0; j < strlen(child); j++)
        {
            if(parent[i+j] != child[j])
                break;
        }
        if(j == strlen(child))
            res = parent + i;
    }

    return res;
}