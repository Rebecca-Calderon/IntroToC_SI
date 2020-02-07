// create a program that splits students into groups
// ask user for number of students and number of groups
// give students left over

// this program helps practice the following:
    // printf, scanf
    // math operations: integer division, modulus operator

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/

// included <stdio.h> because this program using IO (input/output)
#include <stdio.h>

int main(void)
{
  int numStudents; // total number of students (given by user)
  int numGroups; // number of groups (given by user)
  int studentsPerGroup; // number of students in each group
  int studentsLeftover; // number of students that will not have a group

  // prompt user for first input
  printf("How many students do you have? ");
  scanf("%d", &numStudents);
  //      ^---^--- these are important, %d tells computer we are expecting an int (whole number)
  // &numStudents says store value given into numStudents variable

  // prompt user for second input
  printf("How many groups do you want? ");
  // wait for input and store value given into numGroups
  scanf("%d", &numGroups);

  // lets do some math!

  // stores value of numStudents / numGroups into studentsPerGroup
  // don't forget integer division takes place here!!
  studentsPerGroup = numStudents / numGroups;
  // divides numStudents by numGroups and gives remainder
  // stores that value in studentsLeftover
  studentsLeftover = numStudents % numGroups;

  // print all the outputs!
  printf("You have %d groups and %d students.", numGroups, numStudents);
  printf("You will have %d students per group.\n", studentsPerGroup);
  printf("And %d students leftover\n", studentsLeftover);

  // returns 0 at end of program to signal program
  // ran to completion without any errors (woo!)
  return 0;
}
