/*	exe14_08.c
 *  2025-02-03
 *  modified by Andy Hsu
 * 
 *  The Colossus Airlines fleet consists of one plane with a seating capacity of 12. It
 *  makes one flight daily. Write a seating reservation program with the following
 *  features:
 *  a. The program uses an array of 12 structures. Each structure should hold a
 *  seat identification number, a marker that indicates whether the seat is
 *  assigned, the last name of the seat holder, and the first name of the seat
 *  holder.
 *  b. The program displays the following menu:
    
    To choose a function, enter its letter label:
    a) Show number of empty seats
    b) Show list of empty seats
    c) Show alphabetical list of seats
    d) Assign a customer to a seat assignment
    e) Delete a seat assignment
    f) Quit
    
 *  c. The program successfully executes the promises of its menu. Choices d)
 *  and e) require additional input, and each should enable the user to abort
 *  an entry.
 *  d. After executing a particular function, the program shows the menu again,
 *  except for choice f).
 *  e. Data is saved in a file between runs. When the program is restarted, it first
 *  loads in the data, if any, from the file.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define SEAT_CAPACITY   12
#define NAMELEN         20
struct fleet
{
    int seat_id;
    bool is_assigned;
    char lname[NAMELEN];
    char fname[NAMELEN];
};
const char FILE_NAME[NAMELEN] = "exe14_08data.txt";
char get_first(void);
char show_menu(void);
int get_empty_num(const struct fleet * pp, int num);
void show_empty(const struct fleet * pp, int num);
void assigncustomer(struct fleet *pp);
bool is_seat_avail(const struct fleet * pp, int tmp_seat_id);
void show_alphabetical(const struct fleet * pp, int num);
void deletecustomer(struct fleet *pp);
int main(void)
{
    FILE * fp;
    struct fleet plane[SEAT_CAPACITY];
    int i;
    int choice;
    int size = sizeof(struct fleet);

    // initialize struct fleet array, seat identification number range from 0 to 11
    for(i = 0; i < SEAT_CAPACITY; i++)
        plane[i] = (struct fleet){i, false, "", ""};
    #if 0
    // initialize data file
    if((fp = fopen(FILE_NAME, "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s for read.\n", FILE_NAME);
        exit(1);
    }
    for(i = 0; i < SEAT_CAPACITY; i++)
        fwrite(&plane[i], size, 1, fp);
    fclose(fp);
    #endif
    // read from data file
    if((fp = fopen(FILE_NAME, "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s for read.\n", FILE_NAME);
        exit(1);
    }
    i = 0;
    while (i<SEAT_CAPACITY && fread(&plane[i], size, 1, fp) == 1)
    {
        if(i == 0)
            printf("%7s %8s %*s %*s\n", "seat_id", "assigned", NAMELEN, "first name", NAMELEN, "last name");
        printf("%7d %8d %*s %*s\n", plane[i].seat_id, plane[i].is_assigned, NAMELEN, plane[i].fname, NAMELEN, plane[i].lname);
        i++;
    }
    
    // main function
    while((choice = show_menu()) != 'f')
    {
        choice = tolower(choice);
        switch(choice)
        {
            case 'a':
                printf("Number of empty seat is %d\n", get_empty_num(plane, SEAT_CAPACITY));
                break;
            case 'b':
                show_empty(plane, SEAT_CAPACITY);
                break;
            case 'c':
                show_alphabetical(plane, SEAT_CAPACITY);
                break;
            case 'd':
                assigncustomer(plane);
                break;
            case 'e':
                deletecustomer(plane);
                break;
            case 'f':
                break;
            default:
                puts("Invalid input. Try again.");
                break;
        }
    }
    fclose(fp);
    if((fp = fopen(FILE_NAME, "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s for write.\n", FILE_NAME);
        exit(1);
    }
    fwrite(plane, size, SEAT_CAPACITY, fp);
    printf("\nBye.\n");

    return 0;
}

char show_menu(void)
{
    int ch;

    printf("******************************************************************************\n"
           "To choose a function, enter its letter label:\n"
           "a) Show number of empty seats      b) Show list of empty seats\n"
           "c) Show alphabetical list of seats d) Assign a customer to a seat assignment\n"
           "e) Delete a seat assignment        f) Quit\n"
           "******************************************************************************\n");
    ch = get_first();
    while((ch<'a' || ch>'e') && ch!='f')
    {
        printf("Please respond with a, b, c, d, e or f.\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    while(getchar() != '\n')
        continue;

    return ch;
}

int get_empty_num(const struct fleet * pp, int num)
{
    int empty_num = 0;
    int i;

    for(i = 0; i < num; i++)
        if(pp[i].is_assigned == false)
            empty_num++;
    return empty_num;
}

void show_empty(const struct fleet * pp, int num)
{
    int i;
    int count = 0;

    puts("Empty seats are: ");
    for(i = 0; i < num; i++)
    {
        if(i == 0)
            printf("%7s %8s %*s %*s\n", "seat_id", "assigned", NAMELEN, "first name", NAMELEN, "last name");
        if(pp[i].is_assigned == false)
        {                
            printf("%7d %8d %*s %*s\n", pp[i].seat_id, pp[i].is_assigned, NAMELEN, pp[i].fname, NAMELEN, pp[i].lname);
            count++;
        }
    }    
}

void assigncustomer(struct fleet *pp)
{
    int seat_id;

    puts("Enter seat id number: ");
    scanf("%d", &seat_id);
    while(getchar() != '\n')
        ;
    if(is_seat_avail(pp, seat_id))
    {
        pp[seat_id].is_assigned = true;
        printf("Enter passenger first name: ");
        gets(pp[seat_id].fname);
	    printf("Enter passenger last name: ");
        gets(pp[seat_id].lname);
    }else
        puts("Seat number not available.");
}

bool is_seat_avail(const struct fleet * pp, int tmp_seat_id)
{
    bool is_avail = true;
    int i;

    if(tmp_seat_id<0 || tmp_seat_id>11)
        is_avail = false;
    else{
        for(i = 0; i < SEAT_CAPACITY; i++)
        if(((pp+i)->seat_id==tmp_seat_id) && ((pp+i)->is_assigned)==true)
            is_avail = false;
    }

    return is_avail;
}

void show_alphabetical(const struct fleet plane[], int num)
{
    int i;

    for(i = 0; i < num; i++)
    {
        if(i == 0)
            printf("%7s %8s %*s %*s\n", "seat_id", "assigned", NAMELEN, "first name", NAMELEN, "last name");
        if(plane[i].is_assigned == true)
            printf("%7d %8d %*s %*s\n", plane[i].seat_id, plane[i].is_assigned, NAMELEN, plane[i].fname, NAMELEN, plane[i].lname);
    }
}

void deletecustomer(struct fleet *pp)
{
    int seat_id;

    puts("Enter seat id number: ");
    scanf("%d", &seat_id);
    while(getchar() != '\n')
        ;
    if(seat_id>=0 && seat_id<=SEAT_CAPACITY && pp[seat_id].is_assigned==true)
    {
        pp[seat_id].is_assigned = false;
        strcpy(pp[seat_id].fname, "");
        strcpy(pp[seat_id].lname, "");
    }else
        puts("Seat number not available.");
}