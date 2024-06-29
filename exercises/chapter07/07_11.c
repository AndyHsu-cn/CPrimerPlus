/*************************************************************
 * File   : 07_11.c                                          *
 * Date   : 2024-06-29                                       *
 *************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define ARTICHOKE_PER_LB 2.05
#define BEET_PER_LB 1.15
#define CARROT_PER_LB 1.09

#define SHIPPING_5LB 6.50
#define SHIPPING_20LB 14.00
#define SHIPPING_OVER_20LB_RATE 0.5

#define DISCOUNT_RATE 0.05
void flush_input_buffer(void);
char get_first(void);
double calc_shipping(double weight);
int main(void)
{
    double artichoke_weight = 0.0, beet_weight = 0.0, carrot_weight = 0.0;
    double artichoke_price = 0.0, beet_price = 0.0, carrot_price = 0.0;
    double total_weight = 0.0, subtotal = 0, discount = 0.0, shipping = 0.0, total = 0.0;
    double weight;
    char option;
    bool discount_flag = false; 

    printf("ABC Mail Order Grocery\n");
    while (1)
    {
        printf("What would you like to order?\n");
        printf("a) artichokes    b) beets    c) carrots    d) quit\n");
        option = get_first();
        switch (option)
        {
        case 'a':
            printf("How many pounds of artichokes would you like to add? ");
            if(scanf("%lf", &weight) == 1)
                artichoke_weight += weight;
            else
            {
                flush_input_buffer();
                printf("Invalid input, Try again.\n");
                continue;
            } 
            flush_input_buffer();
            break;
        case 'b':
            printf("How many pounds of beets would you like to add? ");
            if(scanf("%lf", &weight) == 1)
                beet_weight += weight;
            else
            {
                flush_input_buffer();
                printf("Invalid input, Try again.\n");
                continue;
            } 
            flush_input_buffer();
            break;
        case 'c':
            printf("How many pounds of carrots would you like to add? ");
            if(scanf("%lf", &weight) == 1)
                carrot_weight += weight;
            else
            {
                flush_input_buffer();
                printf("Invalid input, Try again.\n");
                continue;
            } 
            flush_input_buffer();
            break;
        case 'd':
            goto BILL;
            break;
        
        default:
            printf("Invalid input, Try again.\n");
            continue;
        }
        
    }

BILL:
    artichoke_price = ARTICHOKE_PER_LB * artichoke_weight;
    beet_price = BEET_PER_LB * beet_weight;
    carrot_price = CARROT_PER_LB * carrot_weight;
    subtotal = artichoke_price + beet_price + carrot_price;

    // calculate discount
    if(subtotal >= 100)
    {
        discount_flag = true;
        discount = DISCOUNT_RATE * subtotal;
    }
    // calculate shipping
    total_weight = artichoke_weight + beet_weight + carrot_weight;
    shipping = calc_shipping(total_weight);
    total = subtotal + shipping - (discount_flag? discount: 0.0);
    printf("\nYou Order Summary:\n");
    printf("%11s: %10.2flbs @ $%-10.2f/lb : $%.2f\n", "Artichokes", artichoke_weight, ARTICHOKE_PER_LB, artichoke_price);
    printf("%11s: %10.2flbs @ $%-10.2f/lb : $%.2f\n", "Beets", beet_weight, BEET_PER_LB, beet_price);
    printf("%11s: %10.2flbs @ $%-10.2f/lb : $%.2f\n", "Carrots", carrot_weight, CARROT_PER_LB, carrot_price);
    printf("%16s: $%-9.2f\n", "Subtotal",subtotal);
    if(discount_flag)
        printf("%4.0f%%%11s: $%.2f\n", DISCOUNT_RATE * 100, "Discount", discount);
    printf("%16s: $%.2f\n", "Shipping charges", shipping);
    printf("%16s: $%.2f\n", "Grand total", total);

    return 0;
}

void flush_input_buffer(void)
{
    while (getchar() != '\n')
        ;
}

char get_first(void)
{
    char ch;

    // 跳过前导空白符
    while(isspace((ch = getchar())))
        ;
    flush_input_buffer();

    return ch;
}

double calc_shipping(double weight)
{
    if(weight < 5.0)
        return SHIPPING_5LB;
    else if(weight < 20.0)
        return SHIPPING_20LB;
    else
        return (SHIPPING_20LB + (weight - 20.0) * SHIPPING_OVER_20LB_RATE);
}