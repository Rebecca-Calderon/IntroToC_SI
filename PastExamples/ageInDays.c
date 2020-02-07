// create a program that asks the user how old they are in years
// and outputs how old they are in days (not including leap years)

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/


// skills used in this exercise:
    // printf, scanf, #define
    // math operations: multiplication


// include <stdio.h> because the program is using IO (input/output)
#include <stdio.h>

// create a constant that signifies how many days are in a year
#define DAYS_IN_YEAR 365

int main(void)
{
  int userAge;  // age of user (given by user)
  int ageInDays; //age of user in days

  // prompt user for input
  printf("How old are you? (In years) ");
  scanf("%d", &userAge); //get input from user

  // There are two ways I can calculate and print the output

  // First method:

  // calculate ageInDays and store in variable
  ageInDays = userAge * DAYS_IN_YEAR;
  // use ageInDays to print result
  printf("Your age in days (without leap years) is %d\n", ageInDays);

  // Second method:

  // calculate the result in the print statement
  // this method does not require the ageInDays variable
  printf("Your age in days (without leap years) is %d\n", DAYS_IN_YEAR * userAge);

  // return 0 to signify the program ran to completion without errors (yay!)
  return 0;
}
