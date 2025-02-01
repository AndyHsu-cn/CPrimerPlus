/*	exe13_03.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Write a file copy program that prompts the user to enter the name of a text file to
 *  act as the source file and the name of an output file. The program should use the
 *  toupper() function from ctype.h to convert all text to uppercase as it's written
 *  to the output file. Use standard I/O and the text mode.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    int ch;
    FILE *fd, * fs;

    if (argc != 3)
    {
        printf("Usage: %s filename1 filename2\n", argv[0]);
        exit(1);
    }
    if ((fd = fopen(argv[1], "w")) == NULL)
    {
        printf("Can't open %s for write\n", argv[1]);
        exit(1);
    }
    if ((fs = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open %s for read\n", argv[2]);
        exit(1);
    }
    while ((ch = getc(fs)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fd);
    }
    fclose(fd);
    fclose(fs);

    return 0;
}