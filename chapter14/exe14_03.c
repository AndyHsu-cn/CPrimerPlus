/*	exe14_03.c
 *  2025-02-02
 *  modified by Andy Hsu
 * 
 *  Revise the book-listing program in 14_02manybook.c so that it prints the book
 *  descriptions in the order entered, then alphabetized by title, and then in order of
 *  increased value.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL     41
#define MAXAUTL     31
#define MAXBKS      100
struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int cmp_title(const void * str1, const void * str2);
int cmp_value(const void * val1, const void * val2);
int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while(count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        gets(library[count].author);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while(getchar() != '\n')
            continue;
        if(count < MAXBKS)
            printf("Enter the next title.\n");
    }
    if(count > 0)
    {
        printf("Here is the list of your books by original:\n");
        for(index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index]. value);
        printf("Here is the list of your books by title:\n");
        qsort(&library[0], count, sizeof(struct book), cmp_title);
        for(index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index]. value);
        printf("Here is the list of your books by value:\n");
        qsort(&library[0], count, sizeof(struct book), cmp_value);
        for(index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index]. value);
    }else
        printf("No books? Too bad.\n");

    return 0;
}

int cmp_title(const void * ps1, const void * ps2)
{
    struct book * pb1 = (struct book *)ps1;
    struct book * pb2 = (struct book *)ps2;

    return strcmp(pb1->title, pb2->title);
}

int cmp_value(const void * ps1, const void * ps2)
{
    struct book * pb1 = (struct book *)ps1;
    struct book * pb2 = (struct book *)ps2;

    return (pb1->value - pb2->value);
}