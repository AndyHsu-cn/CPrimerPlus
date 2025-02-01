/*	exe13_05.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Modify the program in Listing 13.6 so that it uses a command-line interface
 *  instead of an interactive interface.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE     1024
#define SLEN        81
void append(FILE * source, FILE * dest);
int main(int argc, const char * argv[])
{
    FILE * fa, *fs;
    int ind = 2;
    int files = 0;

    if(argc < 3)
    {
        printf("Usage: %s fileapp filesrc1 ... \n", argv[0]);
        exit(1);
    }
    if((fa = fopen(argv[1], "a")) == NULL)
    {
        fprintf(stderr, "Can't open %s for append\n", argv[1]);
        exit(2);
    }
    if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer.\n", stderr);
        exit(3);
    }
    while(ind < argc)
    {
        if(strcmp(argv[1], argv[ind]) == 0)
            fputs("Can't append file to itself\n", stderr);
        else if((fs = fopen(argv[ind], "r")) == NULL)
            fprintf(stderr, "Can't open %s for read\n", argv[ind]);
        else{
            if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't create input buffer.\n", stderr);
                continue;
            }
            append(fs, fa);
            if(ferror(fs) != 0)
                fprintf(stderr, "Error in reading file %s\n", argv[ind]);
            if(ferror(fa) != 0)
                fprintf(stderr, "Error in writing file %s\n", argv[1]);
            fclose(fs);
            printf("File %s appended.\n", argv[ind]);
            files++;
            ind++;
        }
    }
    printf("Done. %d files appended.\n", files);
    fclose(fa);

    return 0;
}

void append(FILE * source, FILE * dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);        
}