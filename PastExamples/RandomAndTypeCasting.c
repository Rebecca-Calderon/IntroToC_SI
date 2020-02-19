#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0)); // <--- don't worry about this right now
    int i;
    // if I want a random number between 1 - 10, I can use the rand()
    // function to achieve this, however, how to we contain it to actually
    // be between 1 - 10? We can use the mod % operator to get the remainder
    // Example: rand() generates the number 11. 11 % 10 gives a remainder of 1
    // However, if rand() generates 10, 10 % 10 == 0. Therefore we can get values
    // between 0 - 9 if we mod10. Therefore, we must add one to the result

    // printing 15 random numbers
    printf("Random numbers: ");
    for (i = 1; i <= 15; i++)
        printf("%d ", rand() % 10 + 1);
    printf("\n");


    /* -----------Type Casting --------------*/

    // type casting was used in the ceil() function example in notes
    // if I have a double variable and want to use it as an int, I can
    // typecast it as follows:
    double pi = 3.24;

    printf("Pi without the decimals is equal to %d\n", (int)pi);
    // just put the data type you want to use in parenthesis in front of the variable
    // where you are using it


    return 0;
}
