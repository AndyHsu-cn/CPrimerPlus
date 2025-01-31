/*	12_07rand0.c
 *  2025-01-30
 *  modified by Andy Hsu
 * 
 *  various storage classes produces random numbers uses ANSI C portable algorithm
 *  complie with 12_08r_drive0.c
 */
static unsigned long int next = 1;

int rand0(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned long)(next / 65536) % 32768;
}