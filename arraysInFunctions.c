#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// initilizes all elements in the array to a random num 0 - 100
void init_array(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        array[i] = rand() % 101;
}

// sums up all the values in the array
int sum_array(int array[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += array[i];
    return sum;
}

// prints all the indices of the array
void print_array(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("array[%d] = %d\n", i, array[i]);
}

int main(void)
{
    int array1[10];
    int array2[20];

    init_array(array1, 10);
    init_array(array2, 20);

    print_array(array1, 10);
    printf("-> Sum of array1 = %d\n\n", sum_array(array1, 10));

    print_array(array2, 20);
    printf("-> Sum of array2 = %d\n\n", sum_array(array2, 20));

    return 0;
}
