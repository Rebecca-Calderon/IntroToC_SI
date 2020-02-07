// This program works on for and while loops.

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/

// If you are confused by any parts of this code, come to my SI Sessions for clarification

#include <stdio.h>

#define MAX_NUMBER 100

int main(void)
{
    int i, j, sum = 0;
    int answer = MAX_NUMBER * (MAX_NUMBER + 1) / 2; // closed form formula for summations
    printf("Your answer should be %d\n", answer);

    // FOR loop example
    for (i = 1; i <= MAX_NUMBER; i++)
    {                   // ^ i++ just increments i by 1. e.g. if i == 1, i++ makes i == 2.
        // i is set to 1, adds i (1) to sum
        // i++ increments i. i is set to 2. adds i (2) to sum. Sum = 1 + 2 = 3
        // i++ increments i. i is set to 3. adds i (3) to sum. Sum = 3 + 3 = 6
        // this occurs over and over until middle condition (i < MAX_NUMBER) evaluates to false
        sum += i;
        // printf("Sum = %d\n", sum); // uncomment this line to see output for all 100 iterations (loops)
    }
    printf("Sum in FOR loop = %d\n", sum);


    // WHILE loop example
    i = 1; // can you guess why I need to set i = 0?
    sum = 0; //set sum = 0 because of for loop above
    while (i <= MAX_NUMBER)
    {
        sum += i;
        i++; // why do I need to increment i here? What would happen if I forgot this line of code?
    }
    printf("Sum in WHILE loop = %d\n", sum);

    return 0;
}
