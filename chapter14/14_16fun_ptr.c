/*	14_16fun_ptr.c
 *  2025-02-02
 *  modified by Andy Hsu
 * 
 *  uses function pointers
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char showmenu(void);
void eatline(void);
void ToUpper(char * str);
void ToLower(char * str);
void Transpose(char * str);
void Dummy(char * str);
void show(void(* fp)(char *), char * str);
int main(void)
{
    char line[81];
    char copy[81];
    char choice;
    void(* pfun)(char *);

    puts("Enter a string (empty line to quit):");
    while(gets(line) != NULL && line[0] != '\0')
    {
        while((choice = showmenu()) != 'n')
        {
            switch(choice)
            {
                case 'u': pfun = ToUpper;
                    break;
                case 'l': pfun = ToLower;
                    break;
                case 't': pfun = Transpose;
                    break;
                case 'o': pfun = Dummy;
                    break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Enter a string (empty line to quit):");
    }
    printf("Bye.\n");

    return 0;
}

char showmenu(void)
{
    char ans;

    puts("Enter menu choice:");
    puts("u) uppercase l) lowercase");
    puts("t) transposed case o) original case");
    puts("n) next string");
    ans = getchar();
    ans = tolower(ans);
    eatline();
    while(strchr("ulton", ans) == NULL)
    {
        puts("Please enter a u, l, t, o, or n:");
        ans = tolower(getchar());
        eatline();
    }
    
    return ans;
}

void eatline(void)
{
    while(getchar() != '\n')
        continue;
}

void ToUpper(char * str)
{
    while(*str)
    {
        *str = toupper(*str);
        str++;
    }
}

void ToLower(char * str)
{
    while(*str)
    {
        *str = tolower(*str);
        str++;
    }
}

void Transpose(char * str)
{
    while (*str)
    {
        if(islower(*str))   
            *str = toupper(*str);
        else if(isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

void Dummy(char * str)
{
    // leaves string unchanged
}

void show(void(* fp)(char *), char * str)
{
    (*fp)(str);
    puts(str);
}