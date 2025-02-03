/*	14_14booksave.c
 *  2025-02-02
 *  modified by Andy Hsu
 * 
 *  saves structure contents in a file 
 */
#include <stdio.h>
#include <stdlib.h>
#define MAXTITL     40
#define MAXAUTL     40
#define MAXBKS      10
struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    int size = sizeof(struct book);
    FILE * pbooks;

    if((pbooks = fopen("book.dat", "a+b")) == NULL)
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }
    rewind(pbooks);
    while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        if(count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if(count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
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
        printf("Here is the list of your books:\n");
        for(index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index]. value);
        fwrite(&library[filecount], size, count - filecount, pbooks);
    }else
        printf("No books? Too bad.\n");
    puts("Bye.");
    fclose(pbooks);

    return 0;
}