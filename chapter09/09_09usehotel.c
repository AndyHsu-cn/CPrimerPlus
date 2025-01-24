/*	09_09usehotel.c
 *  2025-01-22
 *  modified by Andy Hsu
 * 
 *  room rate program
 *  compile 09_10hotel.c
 */
#include <stdio.h>
#include "09_11hotel.h"
int main(void)
{
    int nights;
    double hotel_rate;
    int code;

    while((code = menu()) != QUIT)
    {
        switch(code)
        {
            case 1:
                hotel_rate = HOTEL1;
                break;
            case 2:
                hotel_rate = HOTEL2;
                break;
            case 3:
                hotel_rate = HOTEL3;
                break;
            case 4:
                hotel_rate = HOTEL4;
                break;
            default:
                hotel_rate = 0.0;
                printf("Oops!\n");
                break;
        }
        nights = get_nights();
        show_price(hotel_rate, nights);
    }
    printf("Thank you and goodbye.\n");

    return 0;
}