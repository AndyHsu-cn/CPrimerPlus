/*	exe13_07.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Write a program that opens two files. You can obtain the filenames either by
 *  using command-line arguments or by soliciting the user to enter them.
 *  a. Have the program print line 1 of the first file, line 1 of the second file, line
 *  2 of the first file, line 2 of the second file, and so on, until the last line of
 *  the longer file (in terms of lines) is printed.
 *  b. Modify the program so that lines with the same line number are printed on
 *  the same line.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(int argc, char const *argv[])
{
    FILE * fp1, * fp2;
    char line[MAX];
    char ch1, ch2;
    char * ret1,* ret2;

    if(argc != 3)
    {
        fprintf(stdout, "Usage: %s filename1 filename2\n", argv[0]);
        exit(1);
    }
    if((fp1 = fopen(argv[1], "r")) == NULL || (fp2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\" or \"%s\"\n", argv[1], argv[2]);
        exit(2);
    }
    do
    {
        if(ret1 = fgets(line, MAX, fp1))
            fputs(line, stdout);
        if(ret2 = fgets(line, MAX, fp2))
            fputs(line, stdout);
    } while (ret1 || ret2);
    
    printf("\nDone.\n");

    return 0;
}
