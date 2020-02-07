// This program asks a user how old they are and prints the result back to them

// This program helps practice the skills:
  // printf
  // scanf

/*
********DISCLAIMER***********

This is a student made program and was not reviewed by the professor
There may be errors or typos in this code

*/

// included <stdio.h> because we are using IO (input/output) in this program
#include <stdio.h>

int main(void)
{
  int userAge;

  printf("How old are you? ");
  scanf("%d", &userAge);

  printf("You are %d years old!\n", userAge);

  return 0;
}
