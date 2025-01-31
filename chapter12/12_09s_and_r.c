/*	12_09s_and_r.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  various storage classes produces random numbers uses ANSI C portable algorithm
 *  complie with 12_10r_drive1.c
 */
static unsigned long int next = 1;

int rand1(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned long)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
    next = seed;
}