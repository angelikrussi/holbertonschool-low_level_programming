#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this  program  prints positive and negative numbers* 
 *        
 * Return: Always 0.
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    {
      printf("%a is positive\n", n);
    }
  else if (n = 0)
    {
      printf("%a is zero\n", n);
    }
  else 
    {
      printf("%a is negative\n", n);
    }
	  
	  return (0);
}
