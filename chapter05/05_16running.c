/*	05_16running.c
 *  2025-01-08
 *  modified by Andy Hsu
 * 
 *  A useful program for runners
 */
#include <stdio.h>
const int S_PER_M = 60;             // seconds in a minute
const int S_PER_H = 3600;           // seconds in an hour
const double M_PER_K = 0.62137;     // miles in a kilometer
int main(void)
{
    double distk, distm;            // distance run in km and in miles
    int min, sec;                   // minutes and seconds for running time
    int time;                       // running time in seconds only
    double mtime;                   // time in seconds for one mile
    int mmin, msec;                 // minutes and seconds for one mile
    double rate;                    // average speed in mph

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);
    time = S_PER_M * min + sec;
    distm = M_PER_K * distk;
    rate = distm / time * S_PER_H;
    // time / distance = time per mile
    mtime = time / distm;
    mmin = (int)mtime / S_PER_M;
    msec = (int)mtime % S_PER_M;
    printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\nYou average speed was %1.2f mph.\n", msec, rate);

    return 0;
}