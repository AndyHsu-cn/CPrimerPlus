/*	exe13_06.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Programs using command-line arguments rely on the user's memory of how to
 *  use them correctly. Rewrite the program in 13_02reducto.c so that, instead of using
 *  command-line arguments, it prompts the user for the required information
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN     40
int main(void)
{
    FILE * in, * out;
    int ch;
    char name[LEN];
    char dest[LEN];
    int count = 0;

    printf("Enter filename: ");
    gets(name);
    if((in = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
        exit(2);
    }
    strncpy(dest, name, LEN-5);
    dest[LEN - 5] = '\0';
    strcat(dest, ".red");
    if((out = fopen(dest, "w")) == NULL)
    {
        fprintf(stdout, "Can't create output file.\n");
        exit(3);
    }
    while((ch = getc(in)) != EOF)
        if(count++%3 == 0)
            putc(ch, out);
    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in colsing files\n");

    return 0;
}
