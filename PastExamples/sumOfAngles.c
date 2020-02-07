// This program calculates the third angle of a triangle
// after getting input from the user for the first two
// angles

// Topics practiced in this code example:
    // using printf to prompt user for input
    // using scanf to receive input
    // formatting

// Your program should do the following:
    // Prompt user for inputs of first two angles
    // Store inputs from user into variables
    // calculate and print the third angles

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/

// You can assume the inputs from the user will be whole numbers

// included <stdio.h> because this program will be dealing with IO (input/output)
#include <stdio.h>

// sum of all the angles of a triangle is 180
// created constant since value will never change
#define SUM_OF_ANGLES 180

int main(void)
{
  int angle1; // first angle variable
  int angle2; // second angle variable
  int angle3; // third angle variable

  // prompt user for first angle
  printf("Please enter the first angle (in degrees): ");
  // receive input from user and store result in variable angle1
  scanf("%d", &angle1);

  // prompt user for second angle
  printf("Please enter the second angle (in degrees): ");
  // receive input from user and store result in variable angle2
  scanf("%d", &angle2);

  // There are two ways to print the result:

  // calculate the third angle and store value in angle3
  angle3 = SUM_OF_ANGLES - (angle1 + angle2);
  // print result using the angle3 variable
  printf("The third angle is %d\n", angle3);


  // we can also calculate the result in the printf statement
  // for this method, we do not need to create an angle3 variable
  printf("The third angle is %d\n", SUM_OF_ANGLES - (angle1 + angle2));


  // we can see when running the two outputs ^ the results are the same

  // return 0 signals program ran to completion with no errors
  return 0;
}
