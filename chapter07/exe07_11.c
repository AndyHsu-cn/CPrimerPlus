/*	exe07_11.c
 *  2025-01-20
 *  modified by Andy Hsu
 * 
 *  The ABC Mail Order Grocery sells artichokes for $1.25 per pound, beets for $0.65
 *  per pound, and carrots for $0.89 per pound. It gives a 5% discount for orders of
 *  $100 or more prior to adding shipping costs. It charges $3.50 shipping and
 *  handling for any order of 5 pounds or under, $10.00 shipping and handling for
 *  orders over 5 pounds and under 20 pounds, and $8.00 plus $0.10 per pound for
 *  shipments of 20 pounds or more. Write a program that uses a switch statement
 *  in a loop such that a response of a lets the user enter the pounds of artichokes
 *  desired, b the pounds of beets, c the pounds of carrots, and q allows the user to
 *  exit the ordering process. The program then should compute the total charges,
 *  the discount, if any, the shipping charges, and the grand total. The program then
 *  should display all the purchase information: the cost per pound, the pounds
 *  ordered, and the cost for that order for each vegetable, the total cost of the
 *  order, the discount (if there is one), the shipping charge, and the grand total of
 *  all the charges.
 */
#include <stdio.h>
#include <ctype.h>
#define DISCOUNT_BREAK 100.0
#define DSICOUNT_RATE 0.05
#define SHIPPING_BREAK1 5
#define SHIPPING_BREAK2 20
#define SHIPPING1 3.50
#define SHIPPING2 10.00
#define SHIPPING3_RATE 0.10
#define SHIPPING3_BASE 8.00
char get_choice(void);
int main(void)
{
    const float PRICE_ARTICHOKES = 1.25f;
    const float PRICE_BEETS = 0.65f;
    const float PRICE_CARROTS = 0.89f;
    float pounds_artichokes = 0.0f;
    float pounds_beets = 0.0f;
    float pounds_carrots = 0.0f;
    float pounds_tmp;
    float orders = 0.0f;
    float discount = 0.0f;
    float shipping = 0.0f;

    char choice;

    while(choice = get_choice())
    {
        switch(choice)
        {
            case 'a':
                printf("Enter pounds of artichokes: ");
                scanf("%f", &pounds_tmp);
                pounds_artichokes += pounds_tmp;
                break;
            case 'b':
                printf("Enter pounds of beets: ");
                scanf("%f", &pounds_tmp);
                pounds_beets += pounds_tmp;
                break;
            case 'c':
                printf("Enter pounds of carrots: ");
                scanf("%f", &pounds_tmp);
                pounds_carrots += pounds_tmp;
                break;
            case 'q':
                break;
            default:
                printf("Type lowercase character a, b, c or q.\n");
                continue;
        }
        if(choice == 'q')
            break;
        while(getchar() != '\n')
            continue;
    }
    orders = pounds_artichokes * PRICE_ARTICHOKES + pounds_beets * PRICE_BEETS + pounds_carrots * PRICE_CARROTS;
    // Now, pounds_tmp means pounds total
    pounds_tmp = pounds_artichokes + pounds_beets + pounds_carrots;
    if(orders > DISCOUNT_BREAK)
        discount = orders * DSICOUNT_RATE;
    if(pounds_tmp <= SHIPPING_BREAK1)
        shipping = SHIPPING1;
    else if(pounds_tmp <= SHIPPING_BREAK2)
        shipping = SHIPPING2;
    else
        shipping = SHIPPING3_BASE + pounds_tmp * SHIPPING3_RATE;
    printf("%10s %10s %10s\n", "Price", "Pounds", "Total");
    printf("%10.2f %10.2f %10.2f\n", PRICE_ARTICHOKES, pounds_artichokes, PRICE_ARTICHOKES * pounds_artichokes);
    printf("%10.2f %10.2f %10.2f\n", PRICE_BEETS, pounds_beets, PRICE_BEETS * pounds_beets);
    printf("%10.2f %10.2f %10.2f\n", PRICE_CARROTS, pounds_carrots, PRICE_CARROTS * pounds_carrots);
    printf("\n\n");
    printf("%10s %10s %10s %10s\n", "TOTAL", "DISCOUNT", "SHIPPING", "GRAND");
    printf("%10.2f %10.2f %10.2f %10.2f\n", orders, discount, shipping, orders-discount+shipping);

    return 0;
}

char get_choice(void)
{
    char choice;

    printf("what would you like: \n");
    printf("a) artichokes            b) beets \n");
    printf("c) carrots               q) quit\n");
    scanf("%c", &choice);
    while(getchar() != '\n')
        continue;
    
    return choice;
}