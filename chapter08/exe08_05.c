/*	exe08_05.c
 *  2025-01-21
 *  modified by Andy Hsu
 * 
 *  Modify the guessing program of Listing 8.4 so that it uses a more intelligent
 *  guessing strategy. For example, have the program initially guess 50, and have it
 *  ask the user whether the guess is high, low, or correct. If, say, the guess is low,
 *  have the next guess be halfway between 50 and 100, that is, 75. If that guess is
 *  high, let the next guess be halfway between 75 and 50, and so on. Using this
 *  binary search strategy, the program quickly zeros in on the correct answer, at
 *  least if the user does not cheat.
 */
#include <stdio.h>
#define MIN 1
#define MAX 100
char get_first(void);
int main(void)
{
    int low = MIN, high = MAX;
    int guess = (low + high)/2;
    int choice;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\na h if it is high, a l if it is low.\n");
    printf("Uh...is your number %d?\n", guess);
    while((choice = get_first()) != 'y')
    {
        switch(choice)
        {
            case 'h':
                high = guess - 1;
                guess = (low + high)/2;
                break;
            case 'l':
                low = guess + 1;
                guess = (low + high)/2;
                break;
            default:
                printf("Just type h, l, or y\n");
                continue;
        }
        printf("Uh...is your number %d?\n", guess);
    }
    printf("I knew I could do it!\n");

    return 0;
}

char get_first(void)
{
    char ch;

    ch = getchar();
    while(getchar() != '\n')
        continue;

    return ch;
}