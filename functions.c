// Intro to C SI - Adrian

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// this function finds the sum from
// 1 - n inclusive. if n == 5, sum from
// 1 - 5 will be calculated
int sum(int n)
{
    int i, sum = 0;
    for (i = 0; i <= n; i++)
        sum += i;
    // returns the value of sum back to main to be used
    // in any way we need for the remainder of the program
    return sum;
}

int main(void)
{
    int this_sum, i;
    // I can now find the sum for many numbers without having to
    // write the above for loop multiple times
    printf("---Using functions---\n");
    printf("Sum = %d\n", sum(10));
    printf("Sum = %d\n", sum(20));
    printf("Sum = %d\n", sum(30));
    printf("Sum = %d\n", sum(40));
    printf("Sum = %d\n\n", sum(50));

    // this is how we would have to find the sum for
    // 1-10, 1-20, and 1-30 before. Now I can just do
    // it in the above way
    printf("---Using multiple FOR loops---\n");
    this_sum = 0;
    for (i = 0; i <= 10; i++)
        this_sum += i;
    printf("Sum = %d\n", this_sum);
    this_sum = 0;
    for (i = 0; i <= 20; i++)
        this_sum += i;
    printf("Sum = %d\n", this_sum);
    this_sum = 0;
    for (i = 0; i <= 30; i++)
        this_sum += i;
    printf("Sum = %d\n", this_sum);

    return 0;
}
