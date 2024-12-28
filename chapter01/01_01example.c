/*	01_01example.c
 *  2024-12-25
 *  modified by Andy Hsu
 * 
 *  shows an example of C source code
 */
#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog (s)!\n", dogs);

    return 0;
}