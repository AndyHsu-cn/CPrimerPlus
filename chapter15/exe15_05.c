/*	exe15_05.c
 *  2025-02-08
 *  modified by Andy Hsu
 * 
 *  Write a function that rotates the bits of an unsigned int by a specified number
 *  of bits to the left. For instance, rotate_l(x,4) would move the bits in x four
 *  places to the left, and the bits lost from the left end would reappear at the right
 *  end. That is, the bit moved out of the high-order position is placed in the loworder
 *  position. Test the function in a program.
 */
#include <stdio.h>
#include <limits.h>
#define BITS        (CHAR_BIT * sizeof(int))
#define LBITMASK    (1 << (BITS - 1))
char * itobs(int n, char * ps);
void show_bstr(const char * str);
unsigned int rotate(unsigned int number, unsigned int pos);
int main(void)
{
    unsigned int number, n;
    char bin_str[8 * sizeof(int) + 1];

    printf("Enter a non-negative integer value and a number of positions to rotate: ");
    while(scanf("%u %u", &number, &n) == 2)
    {
        puts("Before rotation:");
        itobs(number, bin_str);
        show_bstr(bin_str);
        putchar('\n');
        puts("After rotate:");
        number = rotate(number, n);
        itobs(number, bin_str);
        show_bstr(bin_str);
        putchar('\n');
        printf("Enter next pair of numbers: ");
    }
    puts("Bye.\n");

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    static int size = 8 * sizeof(int);

    for(i = size - 1; i >=0 ; i--, n >>= 1 )
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';

    return ps;
}

void show_bstr(const char * str)
{
    int i = 0;

    while(str[i])
    {
        putchar(str[i]);
        if(++i%4 == 0 && str[i])
            putchar(' ');
    }
}

unsigned int rotate(unsigned int number, unsigned int n)
{
    int i = 0;
    int l_bit;

    while(i < n)
    {
        l_bit = number & LBITMASK;
        number <<= 1;
        if(l_bit)
            number |= 0x1;
        i++;
    }

    return number;
}