/*	exe13_11.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Write a program that takes two command-line arguments. The first is a string;
 *  the second is the name of a file. The program should then search the file, printing
 *  all lines containing the string. Because this task is line oriented rather than
 *  character oriented, use fgets() instead of getc(). Use the standard C library
 *  function strstr() (briefly described in exercise 7 of Chapter 11) to search each
 *  line for the string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX     81
int main(int argc, char const *argv[])
{
    FILE * fp;
    char line[MAX];

    if(argc != 3)
    {
        fprintf(stdout, "Usage: %s string filename\n", argv[0]);
        exit(1);
    }
    if((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[2]);
        exit(2);
    }
    while(fgets(line, MAX, fp) != NULL)
    {
        if(strstr(line, argv[1]) != NULL)
            printf("%s", line);
    }

    return 0;
}
