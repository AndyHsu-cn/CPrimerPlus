/*************************************************************
 * File   : 08_03file_eof.c                                  *
 * Date   : 2024-06-30                                       *
 * Purpose: open a file and display it                       *
 *************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;
	FILE * fp;
	char fname[50];

	printf("Enter the name of the file: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");			// open file for reading
	if(fp == NULL)
	{
		printf("Failed to open file. Bye\n");
		exit(1);			// quit program
	}
	while((ch = getc(fp)) != EOF)
		putchar(ch);	
	fclose(fp);				// close the file

	return 0;
}
