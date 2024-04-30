#include <cs50.h>
#include <stdio.h>

//ask for name, age and phone number 
int main (void)
{
  string name = get_string("What is your name? ");
  int age = get_int("What's your age? ");
  string phone = get_string("What's your phone number? "); 

  printf("Your age is %i. Your name is %s, and your phone number is %s.", age, name, phone);

  //if i have called less than 1 time? if so call them again 
  int n;
  do 
    {
      n = get_int("How many times have you called %s? ", phone);
    }
  while (n <= 2);
    {
      printf("You should call them more");
    }
}

