/*	16_11doubincl.c
 *  2025-02-06
 *  modified by Andy Hsu
 * 
 *  include header twice
 *  complie with 16_12names_st.c
 */
#include <stdio.h>
#include "16_10names_st.h"
#include "16_10names_st.h"
int main(void)
{
    names stu;

    get_names(&stu);
    show_names(&stu);
    printf("\n");

    return 0;
}