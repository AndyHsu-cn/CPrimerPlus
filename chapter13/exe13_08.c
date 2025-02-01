/*	exe13_08.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Write a program that takes as command-line arguments a character and zero or
 *  more filenames. If no arguments follow the character, have the program read the
 *  standard input. Otherwise, have it open each file in turn and report how many
 *  times the character appears in each file. The filename and the character itself
 *  should be reported along with the count. Include error-checking to see whether
 *  the number of arguments is correct and whether the files can be opened. If a file
 *  can't be opened, have the program report that fact and go on to the next file.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE * fp;
    int ch;
    int count;
    int i = 2;

    if(argc < 2)
    {
        fprintf(stdout, "Usage: %s character\n", argv[0]);
        exit(1);
    }else if(argc == 2){
        puts("Enter strings:");
        while((ch = getchar()) != EOF)
            if(ch == *argv[1])
                count++;
                printf("File stdin, %c appears %d times.\n", *argv[1], count);

    }else{
        while(i < argc)
        {
            count = 0;
            if((fp = fopen(argv[i], "r")) == NULL)
            {
                fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[i]);
                i++;
                continue;
            }
            while((ch = fgetc(fp)) != EOF)
            {
                if(ch == *argv[1])
                    count++;
            }
            printf("File %s, %c appears %d times.\n", argv[i], *argv[1], count);
            i++;
            fclose(fp);
        }
    }

    return 0;
}
