/*	exe11_10.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  Write a program that reads in up to 10 strings or to EOF, whichever comes first.
 *  Have it offer the user a menu with five choices: print the original list of strings,
 *  print the strings in ASCII collating sequence, print the strings in order of
 *  increasing length, print the strings in order of the length of the first word in the
 *  string, and quit. Have the menu recycle until the user enters the quit request. The
 *  program, of course, should actually perform the promised tasks
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE    81
#define LIM     10
char get_first(void);
char get_choice(void);
void print_original(char (* arr)[SIZE], int rows);
void stsrt(char (* strings)[SIZE], int num);
void stsrt_len(char (* strings)[SIZE], int num);
void stsrt_first_len(char (* strings)[SIZE], int num);
int get_first_len(char * str);
int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;
    int choice;
    
    printf("Input up to %d lines, and I will sort them.\n",LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while(ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0')
        ct++;

    while((choice = get_choice()) != 'q')
    {
        switch(choice)
        {
            case 'a':
                print_original(input, ct);
                break;
            case 'b':
                stsrt(input, ct);
                break;
            case 'c':
                stsrt_len(input, ct);
                break;
            case 'd':
                stsrt_first_len(input, ct);
                break;
            default:
                // The default case is handy for debugging
                printf("Program error!\n");
                break;
        }
    }
    printf("Bye!\n");

    return 0;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    while(getchar() != '\n')
        continue;

    return ch;
}

char get_choice(void)
{
    int ch;

    printf("a) print the original list of strings               b) print the strings in ASCII collating sequence\n");
    printf("c) print the strings in order of increasing length  d) print the strings in order of the length of the first word in the string\n");
    printf("q) quit\n");
    ch = get_first();
    while((ch<'a' || ch>'d') && ch!='q')
    {
        printf("Please respond with a, b, c, d or q.\n");
        ch = get_first();
    }

    return ch;
}

void print_original(char (* arr)[SIZE], int rows)
{
    for(int ind = 0; ind < rows; ind++)
        printf("arr[%d] = %s\n", ind, arr[ind]);
}

void stsrt(char (* strings)[SIZE], int num)
{
    char temp[SIZE];
    int top, seek;

    for(top = 0; top < num - 1; top++)
        for(seek = top + 1; seek < num; seek++)
            if(strcmp(strings[top], strings[seek]) > 0)
            {
                strcpy(temp, strings[top]);
                strcpy(strings[top], strings[seek]);
                strcpy(strings[seek], temp);
            }
}

void stsrt_len(char (* strings)[SIZE], int num)
{
    char temp[SIZE];
    int top, seek;

    for(top = 0; top < num - 1; top++)
        for(seek = top + 1; seek < num; seek++)
            if(strlen(strings[top]) > strlen(strings[seek]))
            {
                strcpy(temp, strings[top]);
                strcpy(strings[top], strings[seek]);
                strcpy(strings[seek], temp);
            }
}

void stsrt_first_len(char (* strings)[SIZE], int num)
{
    char temp[SIZE];
    int top, seek;

    for(top = 0; top < num - 1; top++)
        for(seek = top + 1; seek < num; seek++)
            if(get_first_len(strings[top]) > get_first_len(strings[seek]))
            {
                strcpy(temp, strings[top]);
                strcpy(strings[top], strings[seek]);
                strcpy(strings[seek], temp);
            }
}

int get_first_len(char * str)
{
    int count = 0;

    while(*str && !isspace(*str))
    {
        count++;
        str++;
    }

    return count;
}