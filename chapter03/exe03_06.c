/*	exe03_06.c
 *  2024-12-31
 *  modified by Andy Hsu
 * 
 *  The mass of a single molecule of water is about 3.0x10-23 grams. A quart of water
 *  is about 950 grams. Write a program that requests an amount of water, in quarts,
 *  and displays the number of water molecules in that amount.
 */
#include <stdio.h>
int main(void)
{
    const float GRAM_PER_QUART = 950.0;
    const float GRAM_PER_MOLECULE = 3.0e-23;
    float water_quart;
    float water_gram;
    float molecule_amount;



    printf("Input an amount of water, in quarts: ");
    scanf("%f", &water_quart);
    water_gram = GRAM_PER_QUART * water_quart;
    molecule_amount = water_gram / GRAM_PER_MOLECULE;
    printf("%e water molecules in %e quart of water.\n", molecule_amount, water_quart);

    return 0;
}