/*	11_27repeat.c
 *  2025-01-27
 *  modified by Andy Hsu
 * 
 *  main() with arguments 
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count;

    printf("The command line has %d arguments:\n", argc - 1);
    for(count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");
    
    return 0;
}
