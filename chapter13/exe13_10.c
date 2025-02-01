/*	exe13_10.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Write a program that opens a text file whose name is obtained interactively. Set
 *  up a loop that asks the user to enter a file position. The program then should
 *  print the part of the file starting at that position and proceed to the next newline
 *  character. Let nonnumeric input terminate the user-input loop.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX     81
int main(void)
{
    FILE * fp;
    int ch;
    char name[MAX];
    long max_pos, cur_pos;

    printf("Enter a file name: ");
    gets(name);
    if((fp = fopen(name, "r"))== NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
        exit(2);
    }
    fseek(fp, 0L, SEEK_END);
    max_pos = ftell(fp);
    printf("Enter a position between 1 and %ld (q to quit): ", max_pos);
    while(scanf("%ld", &cur_pos)==1)
    {
        if(cur_pos<1 || cur_pos > max_pos)
        {
            printf("range error, try again: ");
            continue;
        }
        fseek(fp, cur_pos - 1, SEEK_SET);
        while((ch = getc(fp)) != '\n' && ch != EOF)
            putchar(ch);
        printf("Enter next position between 1 and %ld (q to quit): ", max_pos);
    }
    printf("Done.\n");

    return 0;
}