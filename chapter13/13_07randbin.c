/*	13_07randbin.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  random access, binary i/o
 */
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE      1000
int main(void)
{
    double numbers[ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    long pos;
    FILE * iofile;

    for(i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
    if((iofile = fopen(file, "wb")) == NULL)
    {
        fprintf(stderr, "Could not open %s for output.\n", file);
        exit(1);
    }
    fwrite(numbers, sizeof(double), ARSIZE, iofile);
    fclose(iofile);
    if((iofile = fopen(file, "rb")) == NULL)
    {
        fprintf(stderr, "Could not open %s for random access.\n", file);
        exit(1);
    }
    printf("Enter an index in the range 0 - %d.\n", ARSIZE - 1);
    scanf("%d", &i);
    while(i>=0 && i<ARSIZE)
    {
        pos = (long)i * sizeof(double);
        fseek(iofile, pos, SEEK_SET);
        fread(&value, sizeof(double), 1, iofile);
        printf("The value there is %f.\n", value);
        printf("Enter next index in the range 0 - %d.\n", ARSIZE - 1);
        scanf("%d", &i);
    }
    fclose(iofile);
    puts("Bye!");

    return 0;
}