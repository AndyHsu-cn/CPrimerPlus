/*	exe07_09.c
 *  2025-01-20
 *  modified by Andy Hsu
 * 
 *  Write a program that accepts an integer as input and then displays all the prime
 *  numbers smaller than or equal to that number.
 */
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num);
int main(void)
{
    int num;
    int cnt = 0;
    int ind = 2;

    printf("Enter an integer: ");
    scanf("%d", &num);
    while(ind <= num)
    {
        if(isPrime(ind))
        {
            printf("%6d ", ind);
            if(++cnt % 10 == 0)
                printf("\n");
        }            
        ind++;
    }
    printf("\nBye.\n");

    return 0;
}

bool isPrime(int num)
{
    bool isPrime = true;

    for(int div = 2; div*div <= num; div++)
    {
        if(num%div == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}