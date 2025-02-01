/*	exe13_12.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Create a text file consisting of 20 rows of 30 integers. The integers should be in
 *  the range 0–9 and be separated by spaces. The file is a digital representation of a
 *  picture, with the values 0 through 9 representing increasing levels of darkness.
 *  Write a program that reads the contents of the file into a 20-by-30 array of ints.
 *  In a crude approach toward converting this digital representation to a picture,
 *  have the program use the values in this array to initialize a 20-by-31 array of
 *  chars, with a 0 value corresponding to a space character, a 1 value to the period
 *  character, and so on, with each larger number represented by a character that
 *  occupies more space. For example, you might use # to represent 9. The last
 *  character (the 31st) in each row should be a null character, making it an array of
 *  20 strings. Have the program display the resulting picture (that is, print the
 *  strings) and also store the result in a text file. For example, suppose you start
 *  with this data:
 *  0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 2 0 0 0 0 0 0 0 0 0 0 0
 *  0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 5 2 0 0 0 0 0 0 0 0 0 0
 *  0 0 0 0 0 0 0 0 0 0 0 0 5 8 1 9 8 5 4 5 2 0 0 0 0 0 0 0 0 0
 *  0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 0 4 5 2 0 0 0 0 0 0 0 0
 *  0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 4 5 2 0 0 0 0 0 0 0
 *  0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 1 8 5 0 0 0 4 5 2 0 0 0 0 0 0
 *  0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 4 5 2 0 0 0 0 0
 *  5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
 *  8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
 *  9 9 9 9 0 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 3 9 9 9 9 9 9 9
 *  8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
 *  5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
 *  0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
 *  0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0
 *  0 0 0 0 2 2 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
 *  0 0 0 0 3 3 0 0 0 0 0 0 5 8 9 9 8 5 0 5 6 1 1 1 1 6 5 0 0 0
 *  0 0 0 0 4 4 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
 *  0 0 0 0 5 5 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0
 *  0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
 *  0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
 *  For one particular choice of output characters, the output looks like this:

# *%##%*'
# *%##%**'
*%.#%*~*'
# *%##%* ~*'
# *%##%* ~*'
*%#.%* ~*'
*%##%* ~*'
*************%##%*************
%%%%%%%%%%%%*%##%*%%%%%%%%%%%%
#### #################:#######
%%%%%%%%%%%%*%##%*%%%%%%%%%%%%
*************%##%*************
*%##%*
*%##%* ==
'' *%##%* *= =*
:: *%##%* *=....=*
~~ *%##%* *= =*
** *%##%* ==
*%##%*
*%##%*

 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX     81
#define ROWS    20
#define COLS    30
const char table[10] = {' ', '.', '\'', ':', '~', '*', '=', ' ', '%', '#'};
int main(void)
{
    FILE * fs, *fd;
    char name[MAX];
    char dest_name[MAX];
    char temp[2 * COLS + 1];
    int data[ROWS][COLS] = {0};
    char res[ROWS][COLS + 1];
    int i, j;

    printf("Enter the data filename: ");
    gets(name);
    if((fs = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
        exit(2);
    }
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLS; j++)
            fscanf(fs, "%d", &data[i][j]);
    #if 0
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
            printf("%d ", data[i][j]);
        putchar('\n');
    }
    #endif
    *(strstr(name, "data")) = '\0';
    strncat(name, ".bak.txt", 9);
    if((fd = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
        exit(2);
    }
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
            res[i][j] = table[data[i][j]];
        res[i][COLS] = '\0';
        fprintf(fd, "%s\n", res[i]);
    }
    if(fclose(fs)!=0 || fclose(fd)!=0)
    {
        fprintf(stderr, "I couldn't close the file\n");
        exit(2);
    }
    printf("Done.\n");

    return 0;
}
