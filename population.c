#include <stdio.h>
#include <cs50.h>

int main (void)
{
  //prompting the user for a starting number of llamas and their end goal 
  int start;
  do
    {
      start = get_int("How many Llamas do you have?:  ");
      end = get_int("How many Llamas do you wants?: ");
    }
    while (end < start);

    //how many years will it take to get the goals?  
   //every year, 1/3 of our current llamas are born and 1/4 pass away
    int years = 0;
    while (start < end)
      {
        start += start/12;
        years++;
      }

  printf("Years: %i\n", years);
}
