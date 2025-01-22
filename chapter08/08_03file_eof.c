/*	08_03file_eof.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  open a file and display it
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE * fp;
    char fname[50];
    int ch;

    printf("Enter the name of file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if(fp == NULL)
    {
        printf("Failed to open file. Bye\n");
        exit(1);
    }
    while((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}