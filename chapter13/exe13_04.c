/*	exe13_04.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Write a program that sequentially displays onscreen all the files listed in the
 *  command line. Use argc to control a loop.
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int ch;
    FILE *fp;
    int ind = 1;

    if (argc < 2)
    {
        printf("Usage: %s filename ...\n", argv[0]);
        exit(1);
    }
    while(ind < argc && (fp = fopen(argv[ind], "r")) != NULL)
    {
        while ((ch = getc(fp)) != EOF)
            putc(ch, stdout);
        putchar('\n');
        fclose(fp);
        ind++;
    }
    printf("Bye.");

    return 0;
}