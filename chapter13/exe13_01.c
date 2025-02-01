/*	exe13_01.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Modify Listing 13.1 so that it solicits the user to enter the filename and reads the
 *  user's response instead of using command-line arguments.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    FILE * fp;
    long count = 0;
    char name[81];

    printf("Enter the filename: ");
    gets(name);
    if((fp = fopen(name, "r")) == NULL)
    {
        printf("Can't open %s\n", name);
        exit(1);
    }
    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %ld characters\n", name, count);

    return 0;
}