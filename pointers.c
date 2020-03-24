// Intro to C SI - Adrian

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/

// this code uses a lot of functions. Mostly to make it easier for me
// so I don't have to type the same thing so many times, but it will also
// be good practice for you to look through all the functions and see what
// is being passed and how I am using the functions to make my code easier
// to read

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_x_and_y(int x, int y, char *function, char *time)
{
    printf("---\tx and y values within %s function\t---\n", function);
    printf("---\t\t%s swap occurs\t\t---\n\n", time);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

void swap_with_pointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    print_x_and_y(*x, *y, "swap_with_pointer()", "after");
}

void swap_without_pointer(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    print_x_and_y(x, y, "swap_without_pointer()", "after");
}

void init_array(int *array, int n)
{
    int i;
    srand(time(0)); // seeds the random numbers each time this
                    // function is called

    // fills all elements in the array with random numbers
    // 0 - 100
    for (i = 0; i < n; i++)
        array[i] = rand() % 101;
}

void print_array(int *array, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("array[%d] = %d\n", i, array[i]);
}

int main(void)
{
    const int NUM_ELEMENTS = 10; // change this value to see different sized arrays
    int array[NUM_ELEMENTS]; // array of NUM_ELEMENTS ints
    int x, y;


    // before we knew about pointers, we had to call this init_array
    // function as init_array(array[], NUM_ELEMENTS); while this may not
    // seem like much of a difference, if you had a function to initilize
    // a 2-D array, before you would have to know how many elements were in
    // the second dimension. i.e. for a 5x6 array, you would have to call
    // init_array(array[][6], x, y) where x and y  are the dimensions.
    // Now you can just call init_array(array, x, y) without having a constraint
    // on the second dimension for the parameter
    init_array(array, NUM_ELEMENTS);

    // prints array elements
    print_array(array, NUM_ELEMENTS);

    printf("\n\n\n");
    printf("Swap Functions\n\n");
    // Examples with pointers without arrays
    // this includes swap functions
    x = 5;
    y = 10;

    print_x_and_y(x, y, "main()", "before");


    // uncomment the second function to see how to properly swap values
    // so that you keep the swapped values when returning from the function
    swap_without_pointer(x, y);
    // swap_with_pointer(&x, &y);

    print_x_and_y(x, y, "main()", "after");


    return 0;
}
