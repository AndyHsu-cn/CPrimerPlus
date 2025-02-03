/*	exe14_07.c
 *  2025-02-02
 *  modified by Andy Hsu
 * 
 *  Modify 14_14booksave.c so that as each record is read from the file and shown to
 *  you, you are given the chance to delete the record or to modify its contents. If
 *  you delete the record, use the vacated array position for the next record to be
 *  read. To allow changing the existing contents, you'll need to use the "r+b" mode
 *  instead of the "a+b" mode, and you'll have to pay more attention to positioning
 *  the file pointer so that appended records don't overwrite existing records. It's
 *  simplest to make all changes in the data stored in program memory and then
 *  write the final set of information to the file.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL     40
#define MAXAUTL     40
#define MAXBKS      10
struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
char get_first(void);
void editbook(struct book * pb);
int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;
    int size = sizeof(struct book);
    FILE * pbooks;
    int choice;

    if((pbooks = fopen("book.dat", "rb")) == NULL)
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
        // offer choices
        printf("Please select an action:\n"
			   "[n] next record           [d] delete this record                [m] modify this record.\n");
        choice = get_first();
        switch(choice)
        {
            case 'n':
                count++;
                break;
            case 'd':
                break;
            case 'm':
                editbook(&library[count]);
                break;
            default:
                puts("Error enter a n, d or m:");
                break;
        }
    }
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
    fclose(pbooks);
    if((pbooks = fopen("book.dat", "wb")) == NULL)
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }
    if(count > 0)
    {
        printf("Here is the list of your books:\n");
        for(index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index]. value);
        fwrite(&library[0], size, count, pbooks);
    }else
        printf("No books? Too bad.\n");
    puts("Bye.");
    fclose(pbooks);

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

void editbook(struct book * pb)
{
    printf("Please enter the book title.\n");
    gets(pb->title);
    printf("Now enter the author.\n");
    gets(pb->author);
    printf("Now enter the value.\n");
    scanf("%f", &pb->value);
    getchar();
}