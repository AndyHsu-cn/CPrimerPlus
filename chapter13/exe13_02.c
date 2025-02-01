/*	exe13_02.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Write a file-copy program that takes the original filename and the copy file from
 *  the command line. Use standard I/O and the binary mode, if possible.
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int ch;
    FILE * fd, * fs;

    if(argc != 3)
    {
        printf("Usage: %s destfile srcfile\n", argv[0]);
        exit(1);
    }
    if((fd = fopen(argv[1], "wb")) == NULL)
    {
        printf("Can't open %s for write\n", argv[1]);
        exit(1);
    }
    if((fs = fopen(argv[2], "rb")) == NULL)
    {
        printf("Can't open %s for read\n", argv[2]);
        exit(1);
    }
    while((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);
    fclose(fd);
    fclose(fs);

    return 0;
}
