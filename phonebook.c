#include <cs50.h>
#include <stdio.h>

//ask for name, age and phone number 
int main (void)
{
  string name = get_string("What is your name? ");
  int age = get_int("What's your age? ");
  string phone = get_string("What's your phone number? "); 

  printf("Your age is %i. Your name is %s, and your phone number is %s.", age, name, phone);
  
}
