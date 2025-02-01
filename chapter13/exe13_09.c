/*	exe13_09.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Modify the program in 13_03addaword.c so that each word is numbered according to
 *  the order in which it was added to the list, starting with 1. Make sure that, when
 *  the program is run a second time, new word numbering resumes where the
 *  previous numbering left off.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX     40
int main(void)
{
    FILE * fp;
    int index = 0;
    char words[MAX];

    if((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(1);
    }
    if(fgets(words, MAX, fp) != NULL)
    {
        ++index;
        while(fgets(words, MAX, fp) != NULL)
            ++index;
    }
    puts("Enter words to add to the file; press the Enter");
    puts("key at the beginning of a line to terminate.");
    while(gets(words)!=NULL && words[0]!='\0')
        fprintf(fp, "%d %s\n", ++index, words);
    puts("File contents:");
    rewind(fp);
    while(fgets(words, MAX, fp))
        fputs(words, stdout);
    if(fclose(fp) != 0)
        fprintf(stderr, "Error closing file\n");


    return 0;
}