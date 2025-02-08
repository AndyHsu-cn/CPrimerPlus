/*	exe15_02.c
 *  2025-02-08
 *  modified by Andy Hsu
 * 
 *  Write a program that reads two binary strings as command-line arguments and
 *  prints the results of applying the ~ operator to each number and the results of
 *  applying the &, |, and ^ operators to the pair. Show the results as binary strings.
 */
#include <stdio.h>
#include <stdlib.h>
int bstoi(const char * bin_str);
char * itobs(int n, char * ps);
void show_bstr(const char * str);
int main(int argc, char const *argv[])
{
    int num1, num2;
    char bin_str[8 * sizeof(int) + 1];

    if(argc != 3)
    {
        printf("Usage: %s str1 str2\n", argv[0]);
        exit(1);
    }
    num1 = bstoi(argv[1]);
    num2 = bstoi(argv[2]);
    printf("~%s = ", argv[1]);
    itobs(num1, bin_str);
    show_bstr(bin_str);
    putchar('\n');
    printf("~%s = ", argv[2]);
    itobs(num2, bin_str);
    show_bstr(bin_str);
    putchar('\n');

    printf("%s & %s = ", argv[1], argv[2]);
    itobs(num1 & num2, bin_str);
    show_bstr(bin_str);
    putchar('\n');

    printf("%s | %s = ", argv[1], argv[2]);
    itobs(num1 | num2, bin_str);
    show_bstr(bin_str);
    putchar('\n');

    printf("%s ^ %s = ", argv[1], argv[2]);
    itobs(num1 ^ num2, bin_str);
    show_bstr(bin_str);
    putchar('\n');

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

char * itobs(int n, char * ps)
{
    int i;
    static int size = 8 * sizeof(int);

    for(i = size - 1; i >=0 ; i--, n >>= 1 )
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}

void show_bstr(const char * str)
{
    int i = 0;

    while(str[i])
    {
        putchar(str[i]);
        if(++i%4 == 0 && str[i])
            putchar(' ');
    }
}