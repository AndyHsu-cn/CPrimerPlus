/*	exe15_01.c
 *  2025-02-08
 *  modified by Andy Hsu
 * 
 *  Write a function that converts a binary string to a numeric value. That is, if you
 *  have 
    
    char * pbin = "01001001";
 
 *  you can pass pbin as an argument to the function and have the function return
 *  n int value of 73.
 */
#include <stdio.h>
int bstoi(const char * bin_str);
int main(void)
{
    char * bin_str = "01001001";
    int result;
	
    result = bstoi(bin_str);
    printf("%d\n", result);

    return 0;
}

int bstoi(const char * bin_str)
{
    int i = 0;
    int total = 0;

    while(bin_str[i])
    {
        total *= 2;
        total += bin_str[i] - '0';
        i++;
    }

    return total;
}