/*	exe14_06.c
 *  2025-02-02
 *  modified by Andy Hsu
 * 
 *  A text file holds information about a softball team. Each line has data arranged as
 *  follows:

    4 Jessie Joybat 5 2 1 1
 *  he first item is the player's number, conveniently in the range 0–18. The second
 *  item is the player's first name, and the third is the player's last name. Each name
 *  is a single word. The next item is the player's official times at bat, followed by the
 *  number of hits, walks, and runs batted in (RBIs). The file may contain data for
 *  more than one game, so the same player may have more than one line of data,
 *  and there may be data for other players between those lines. Write a program
 *  that stores the data into an array of structures. The structure should have
 *  members to represent the first and last names, the at bats, hits, walks, and RBIs
 *  (runs batted in), and the batting average (to be calculated later). You can use the
 *  player number as an array index. The program should read to end-of-file, and it
 *  should keep cumulative totals for each player.
 *  The world of baseball statistics is an involved one. For example, a walk or 
 *  reaching base on an error doesn't count as an at-bat but could possibly produce
 *  an RBI. But all this program has to do is read and process the data file, as
 *  described next, without worrying about how realistic the data is.
 *  The simplest way for the program to proceed is to initialize the structure contents
 *  to zeros, read the file data into temporary variables, and then add them to the
 *  contents of the corresponding structure. After the program has finished reading
 *  the file, it should then calculate the batting average for each player and store it in
 *  the corresponding structure member. The batting average is calculated by 
 *  dividing the cumulative number of hits for a player by the cumulative number of
 *  at-bats; it should be a floating-point calculation. The program should then display
 *  the cumulative data for each player along with a line showing the combined
 *  statistics for the entire team.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMELEN     20
#define PLAYERSIZE  19
struct player
{
    int play_no;
    char fname[NAMELEN];
    char lname[NAMELEN];
    unsigned int atbats, hits, walks, rbis;
    float avg;
};
const char FILE_NAME[NAMELEN] = "exe14_06data.txt";
void print_arr(const struct player players[], int n);
void get_data(struct player players[]);
int main(void)
{
    struct player players[PLAYERSIZE];
    int i;

    // initilize struct player array
    for(i = 0; i < PLAYERSIZE; i++)
        players[i] = (struct player) {.fname="", .lname="", .atbats=0, .hits=0, .walks=0, .rbis=0, .avg=0};
    get_data(players);
    print_arr(players, PLAYERSIZE);

    return 0;
}

void print_arr(const struct player players[], int n)
{
    int i;

    puts("Combined data:");
    printf("%2s %*s %*s %5s %5s %5s %5s %5s\n", "No", NAMELEN, "firstname", NAMELEN, "lastname", "atbat", "hits", "walks", "rbis", "avg");
    for(i = 0; i < n; i++)
        printf("%2d %*s %*s %5u %5u %5u %5u %5.2f\n", i, NAMELEN, players[i].fname, NAMELEN, players[i].lname, players[i].atbats, players[i].hits, 
                players[i].walks, players[i].rbis, players[i].avg);
}

void get_data(struct player players[])
{
    FILE * fp ;
    struct player tmp;
    int i = 0;

    if((fp = fopen(FILE_NAME, "r")) == NULL)
    {
        fputs("Can't open file for read.\n", fp);
        exit(1);
    }
    puts("Original data:");
    printf("%2s %*s %*s %5s %5s %5s %5s\n", "No", NAMELEN, "firstname", NAMELEN, "lastname", "atbat", "hits", "walks", "rbis");
    while(fscanf(fp, "%2d %s %s %5u %5u %5u %5u", &tmp.play_no, tmp.fname, tmp.lname, &tmp.atbats, &tmp.hits, &tmp.walks, &tmp.rbis) == 7)
    {
        printf("%2d %*s %*s %5u %5u %5u %5u\n", tmp.play_no, NAMELEN, tmp.fname, NAMELEN, tmp.lname, tmp.atbats, tmp.hits, tmp.walks, tmp.rbis);
        if(strcmp(players[tmp.play_no].fname, "") == 0)
            players[tmp.play_no] = tmp;
        else{
            players[tmp.play_no].atbats += tmp.atbats;
            players[tmp.play_no].hits += tmp.hits;
            players[tmp.play_no].walks += tmp.walks;
            players[tmp.play_no].rbis += tmp.rbis; 
        }
    }
    for(i = 0; i < PLAYERSIZE; i++)
       if(strcmp(players[i].fname, "") != 0)
        players[i].avg = (float)players[i].hits / players[i].atbats;
    fclose(fp);
}