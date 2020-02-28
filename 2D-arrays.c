// Intro to C SI - Adrian

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, j;
    int array[5][6];

    // uncomment this if you want random numbers
    // every time you run the program
    // srand(time(0));

    for (i = 0; i < 5; i++)
        for (j = 0; j < 6; j++)
            array[i][j] = rand() % 101;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 6; j++)
            printf("Array[%d][%d] = %d\n", i, j, array[i][j]);

    return 0;
}
