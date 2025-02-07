/*	16_07names_st.c
 *  2025-02-06
 *  modified by Andy Hsu
 * 
 *  define names_st functions
 */
#include <stdio.h>
#include "16_06names.h"
void get_names(names * pn)
{
    int i;

    printf("Please enter your first name: ");
    fgets(pn->first, SLEN, stdin);
    i = 0;
    while(pn->first[i] != '\n' && pn->first[i] != '\0')
        i++;
    if(pn->first[i] == '\n')
        pn->first[i] = '\0';
    else
        while(getchar() != '\n')
            continue;
    
    i = 0;
    printf("Please enter your last name: ");
    fgets(pn->last, SLEN, stdin);
    while(pn->last[i] != '\n' && pn->last[i] != '\0')
        i++;
    if(pn->last[i] == '\n')
        pn->last[i] = '\0';
    else
        while(getchar() != '\n')
            continue;
}

void show_names(const names * pn)
{
    printf("%s %s", pn->first, pn->last);
}