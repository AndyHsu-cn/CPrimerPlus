/*	exe07_05.c
 *  2025-01-19
 *  modified by Andy Hsu
 * 
 *  Redo exe07_03.c using a switch.
 */
#include <stdio.h>
int main(void)
{
    int num;
    int n_even, n_odd;
    float sum_even, sum_odd;

    n_even = n_odd = 0;
    sum_even = sum_odd = 0.0f;
    while(scanf("%d", &num)==1)
    {
        if(num == 0)
            break;
        switch(num % 2)
        {
            case 0:
                    n_even++;
                    sum_even += num;
                break;
            case 1:
                    n_odd++;
                    sum_odd += num;
                break;
        }
        #if 0
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
        #endif
    }
    printf("total even: %d, average even: %f\n", n_even, sum_even/n_even);
    printf("total odd : %d, average odd : %f\n", n_odd, sum_odd/n_odd);

    return 0;
}