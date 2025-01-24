/*	09_11hotel.c
 *  2025-01-22
 *  modified by Andy Hsu
 * 
 *  constants and declarations for hotel.c
 */
#define HOTEL1      80.00
#define HOTEL2      125.00
#define HOTEL3      155.00
#define HOTEL4      200.00
#define DISCOUNT    0.95
#define QUIT        5
#define STARS       "**********************************"

int menu(void);

int get_nights(void);

void show_price(double rate, int nights);