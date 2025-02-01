/*	exe13_13.c
 *  2025-02-01
 *  modified by Andy Hsu
 * 
 *  Digital images, particularly those radioed back from spacecraft, may have
 *  glitches. Add a de-glitching function to programming exercise 12. It should
 *  compare each value to its immediate neighbors to the left and right, above and
 *  below. If the value differs by more than 1 from each of its neighbors, replace the
 *  value with the average of the neighboring values. You should round the average
 *  to the nearest integer value. Note that the points along the boundaries have
 *  fewer than four neighbors, so they require special handling
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX     81
#define ROWS    20
#define COLS    30
const char table[10] = {' ', '.', '\'', ':', '~', '*', '=', ' ', '%', '#'};
void de_glitching(int r, int c, int arr[r][c]);
int main(void)
{
    FILE * fs, *fd;
    char name[MAX];
    char dest_name[MAX];
    char temp[2 * COLS + 1];
    int data[ROWS][COLS] = {0};
    char res[ROWS][COLS + 1];
    int i, j;

    printf("Enter the data filename: ");
    gets(name);
    if((fs = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
        exit(2);
    }
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLS; j++)
            fscanf(fs, "%d", &data[i][j]);

    de_glitching(ROWS, COLS, data);
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
            printf("%d ", data[i][j]);
        putchar('\n');
    }
    *(strstr(name, "data")) = '\0';
    strncat(name, ".bak.txt", 9);
    if((fd = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
        exit(2);
    }
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
            res[i][j] = table[data[i][j]];
        res[i][COLS] = '\0';
        fprintf(fd, "%s\n", res[i]);
    }
    if(fclose(fs)!=0 || fclose(fd)!=0)
    {
        fprintf(stderr, "I couldn't close the file\n");
        exit(2);
    }
    printf("Done.\n");

    return 0;
}

void de_glitching(int r, int c, int arr[r][c])
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(i==0 && j==0)
            {
                if(abs(arr[i][j] - arr[i][j+1]) > 1 && abs(arr[i][j] - arr[i+1][j]) > 1)
                    arr[i][j] = (arr[i][j+1] + arr[i+1][j]) / 2;
            }else if(i==0 && j==c-1){
                if(abs(arr[i][j] - arr[i][j-1]) > 1 && abs(arr[i][j] - arr[i+1][j]) > 1)
                arr[i][j] = (arr[i][j-1] + arr[i+1][j]) / 2;
            }else if(i==r-1 && j==0){
                if(abs(arr[i][j] - arr[i][j+1]) > 1 && abs(arr[i][j] - arr[i-1][j]) > 1)
                    arr[i][j] = (arr[i][j+1] + arr[i-1][j]) / 2;
            }else if(i==r-1 && j==c){
                if(abs(arr[i][j] - arr[i][j-1]) > 1 && abs(arr[i][j] - arr[i-1][j]) > 1)
                    arr[i][j] = (arr[i][j-1] + arr[i-1][j]) / 2;
            }else if(i==0){
                if(abs(arr[i][j] - arr[i][j+1]) > 1 &&  abs(arr[i][j] - arr[i][j-1]) > 1 && abs(arr[i][j] - arr[i+1][j]) > 1)
                    arr[i][j] = (arr[i][j+1] + arr[i][j-1] + arr[i+1][j]) / 3;
            }else if(i==r-1){
                if(abs(arr[i][j] - arr[i][j+1]) > 1 &&  abs(arr[i][j] - arr[i][j-1]) > 1 && abs(arr[i][j] - arr[i-1][j]) > 1)
                    arr[i][j] = (arr[i][j+1] + arr[i][j-1] + arr[i-1][j]) / 3;
            }else if(j==0){
                if(abs(arr[i][j] - arr[i][j+1]) > 1 &&  abs(arr[i][j] - arr[i-1][j]) > 1 && abs(arr[i][j] - arr[i+1][j]) > 1)
                    arr[i][j] = (arr[i][j+1] + arr[i-1][j] + arr[i+1][j]) / 3;
            }else if(j==c-1){
                if(abs(arr[i][j] - arr[i][j+1]) > 1 &&  abs(arr[i][j] - arr[i][j-1]) > 1 && abs(arr[i][j] - arr[i-1][j]) > 1)
                    arr[i][j] = (arr[i][j+1] + arr[i][j-1] + arr[i-1][j]) / 3;
            }else{
                if(abs(arr[i][j] - arr[i][j+1]) > 1 &&  abs(arr[i][j] - arr[i][j-1]) > 1 && abs(arr[i][j] - arr[i-1][j]) > 1 && abs(arr[i][j] - arr[i+1][j]) > 1)
                    arr[i][j] = (arr[i][j+1] + arr[i][j-1] + arr[i-1][j] + arr[i+1][j]) / 4;
            }
        }
    }
}
