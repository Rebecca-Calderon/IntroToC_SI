#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ifp;
    int numbers, i;
    int returnVal = 10000;
    int array_of_ints[10];

    ifp = fopen("numbers.txt", "r"); // opens file in "read" mode.
    if (ifp == NULL)
    {
        printf("Oops!\n");
        return 1;
    }

 // fscanf(someFilePointer, conversionChar, otherArguments)
    printf("----First WHILE loop----\n");
    while(feof(ifp) == 0)
    {
        fscanf(ifp, "%d", &numbers);
        printf("%d\n", numbers);
    }
    printf("\n");

    freopen("numbers.txt", "r", ifp ); // don't worry about this line of code right now

    // we found out in session that this while loop
    // and the one above do exactly the same thing
    printf("----Second WHILE loop----\n");
    while (fscanf(ifp, "%d", &numbers) != EOF)
    {
        printf("Number read = %d\n", numbers);
    }
    printf("\n");

    freopen("numbers.txt", "r", ifp); // don't worry about this line of code right now

    // this works because the number of lines in the file is less than
    // the length of the array (10)
    printf("----Using FOR loop and int array----\n");
    for (i = 0; fscanf(ifp, "%d", &array_of_ints[i]) != EOF; i++)
    {
        printf("numbers[%d] = %d\n", i, array_of_ints[i]);
    }

    return 0;
}
