/*	exe07_03.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  Write a program that reads integers until 0 is entered. After input terminates, the
 *  program should report the total number of even integers (excluding the 0)
 *  entered, the average value of the even integers, the total number of odd integers
 *  entered, and the average value of the odd integers.
 */
#include <stdio.h>
int main(void)
{
    int num;
    int n_even = 0, n_odd = 0;
    float sum_even = 0.0f, sum_odd = 0.0f;

    while(scanf("%d", &num) == 1)
    {
        if(num == 0)
            break;
        else if(num%2 == 0)
        {
            n_even++;
            sum_even += num;
        }else{
            n_odd++;
            sum_odd += num;
        }
    }
    printf("total even: %d, average even: %f\n", n_even, sum_even/n_even);
    printf("total odd : %d, average odd : %f\n", n_odd, sum_odd/n_odd);

    return 0;
}