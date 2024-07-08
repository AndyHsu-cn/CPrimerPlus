/*************************************************************
 * File   : 09_11hotel.c                                     *
 * Date   : 2024-07-07                                       *
 * Purpose: constants and declarations for hotel.c           *
 *************************************************************/
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "*************************"

int menu(void);
int get_nights(void);
void show_price(double hotel_rate, int nights);