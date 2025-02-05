/*	exe14_09.c
 *  2025-02-05
 *  modified by Andy Hsu
 * 
 *  Colossus Airlines (from exercise 8) acquires a second plane (same capacity) and
 *  expands its service to four flights daily (Flights 102, 311, 444, and 519). Expand
 *  the program to handle four flights. Have a top-level menu that offers a choice of
 *  flights and the option to quit. Selecting a particular flight should then bring up a
 *  menu similar to that of exercise 8. However, one new item should be added:
 *  confirming a seat assignment. Also, the quit choice should be replaced with the
 *  choice of exiting to the top-level menu. Each display should indicate which flight is
 *  currently being handled. Also, the seat assignment display should indicate the
 *  confirmation status.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define FLIGHT          4
#define SEAT_CAPACITY   12
#define NAMELEN         20
struct Seat
{
    int seat_id;
    bool is_assigned;
    char lname[NAMELEN];
    char fname[NAMELEN];
};
struct Flight{
    int flight_id;
    struct Seat seat;
};
const char FILE_NAME[NAMELEN] = "exe14_09data.txt";
struct Flight flights[FLIGHT * SEAT_CAPACITY];
// struct Seat seats[SEAT_CAPACITY];
const int FLIGHT_ID[FLIGHT] = {102, 311, 444, 519};
int id;
char get_first(void);
char show_menu(void);
int get_empty_num(void);
void show_empty(void);
void assigncustomer(void);
bool is_seat_avail(int tmp_seat_id);
void show_alphabetical(void);
void deletecustomer(void);
int print_top_menu();
int main(void)
{
    FILE * fp;
    
    int i, j;
    int choice;
    int size = sizeof(struct Flight);

    // initialize struct Seat array, seat identification number range from 0 to 11
    #if 0
    for(i = 0; i < SEAT_CAPACITY; i++)
        seats[i] = (struct Seat){i, false, "", ""};
    #endif
    for(i = 0; i < FLIGHT; i++)
        for(j = 0; j < SEAT_CAPACITY; j++)
            flights[SEAT_CAPACITY*i + j] = (struct Flight){FLIGHT_ID[i], (struct Seat){j, false, "", ""}};
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
    #if 0
    while (i<SEAT_CAPACITY && fread(&seats[i], size, 1, fp) == 1)
    {
        printf("%7d %8d %*s %*s\n", seats[i].seat_id, seats[i].is_assigned, NAMELEN, seats[i].fname, NAMELEN, seats[i].lname);
        i++;
    }
    #endif
    i = 0;
    while(i < FLIGHT * SEAT_CAPACITY && fread(&flights[i], size, 1, fp) == 1)
    {
        if(i == 0)
            printf("%9s %7s %8s %*s %*s\n", "flight_id", "seat_id", "assigned", NAMELEN, "first name", NAMELEN, "last name");
        printf("%9d %7d %8d %*s %*s\n", flights[i].flight_id, flights[i].seat.seat_id, flights[i].seat.is_assigned, 
                NAMELEN, flights[i].seat.fname, NAMELEN, flights[i].seat.lname);
        i++;
    }
    fclose(fp);
    // main function
    while((id = print_top_menu()) != 0)
    {
        while ((choice = show_menu()) != 'f')
        {
            choice = tolower(choice);
            switch (choice)
            {
            case 'a':
                printf("Number of empty seat is %d\n", get_empty_num());
                break;
            case 'b':
                show_empty();
                break;
            case 'c':
                show_alphabetical();
                break;
            case 'd':
                assigncustomer();
                break;
            case 'e':
                deletecustomer();
                break;
            case 'f':
                break;
            default:
                puts("Invalid input. Try again.");
                break;
            }
        }
    }
    if((fp = fopen(FILE_NAME, "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s for write.\n", FILE_NAME);
        exit(1);
    }
    fwrite(flights, size, FLIGHT * SEAT_CAPACITY, fp);
    fclose(fp);
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

int get_empty_num()
{
    int empty_num = 0;
    int i;

    for(i = id * SEAT_CAPACITY; i < (id + 1)*SEAT_CAPACITY; i++)
        if(flights[i].seat.is_assigned == false)
            empty_num++;
    return empty_num;
}

void show_empty()
{
    int i;
    int count = 0;

    puts("Empty seats are: ");
    for(i = id * SEAT_CAPACITY; i < (id + 1)*SEAT_CAPACITY; i++)
    {
        if(i == 0)
            printf("%8s %7s %8s %*s %*s\n", "flight_id", "seat_id", "assigned", NAMELEN, "first name", NAMELEN, "last name");
        if(flights[i].seat.is_assigned == false)
        {                
            printf("%8d %7d %8d %*s %*s\n", flights[i].flight_id, flights[i].seat.seat_id, flights[i].seat.is_assigned,
                    NAMELEN, flights[i].seat.fname, NAMELEN, flights[i].seat.lname);
            count++;
        }
    }    
}

void assigncustomer()
{
    int seat_id;

    puts("Enter seat id number: ");
    scanf("%d", &seat_id);
    while(getchar() != '\n')
        ;
    if(is_seat_avail(seat_id))
    {
        int i = id * SEAT_CAPACITY;

        while(i < (id + 1) * SEAT_CAPACITY)
        {
            if(flights[i].seat.seat_id == seat_id)
                break;
            i++;
        }
        flights[i].seat.is_assigned = true;
        printf("Enter passenger first name: ");
        gets(flights[i].seat.fname);
	    printf("Enter passenger last name: ");
        gets(flights[i].seat.lname);
    }else
        puts("Seat number not available.");
}

bool is_seat_avail(int tmp_seat_id)
{
    bool is_avail = true;
    int i;

    if(tmp_seat_id<0 || tmp_seat_id>11)
        is_avail = false;
    else{
        for(i = id * SEAT_CAPACITY; i < (id + 1)*SEAT_CAPACITY; i++)
        if((flights[i].seat.seat_id ==tmp_seat_id) && (flights[i].seat.is_assigned==true))
            is_avail = false;
    }

    return is_avail;
}

void show_alphabetical()
{
    int i;

    for(i = id * SEAT_CAPACITY; i < (id + 1) * SEAT_CAPACITY; i++)
    {
        if(i == 0)
            printf("%8s %7s %8s %*s %*s\n", "flight_id", "seat_id", "assigned", NAMELEN, "first name", NAMELEN, "last name");
        if(flights[i].seat.is_assigned == true)
            printf("%8d %7d %8d %*s %*s\n", flights[i].flight_id, flights[i].seat.seat_id, flights[i].seat.is_assigned, 
                    NAMELEN, flights[i].seat.fname, NAMELEN, flights[i].seat.lname);
    }
}

void deletecustomer()
{
    int seat_id;
    int i = id * SEAT_CAPACITY;

    puts("Enter seat id number: ");
    scanf("%d", &seat_id);
    while(getchar() != '\n')
        ;
    if(seat_id>=0 && seat_id<=SEAT_CAPACITY)
    {
        while(i < (id + 1) * SEAT_CAPACITY)
        {
            if(flights[i].flight_id == id && flights[i].seat.seat_id == seat_id)
                break;
            i++;
        }
        flights[i].seat.is_assigned = false;
        strcpy(flights[i].seat.fname, "");
        strcpy(flights[i].seat.lname, "");
    }else
        puts("Seat number not available.");
}

int print_top_menu(void)
{
    int flight_id;

	puts("To choose a flight, enter its letter label:");
	puts("1) 102    2) 311");
	puts("3) 444    4) 519");
	puts("0) Quit");

    while(scanf("%d", &flight_id)!=1 || flight_id<0 || flight_id>4)
        printf("Enter 0 ~ 5: ");
    while(getchar() != '\n')
        getchar();

	return flight_id;
}