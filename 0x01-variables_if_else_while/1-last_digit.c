#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this  program  print the last digit
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else
{
  printf("Last digit of %d is %d is 0 and is 0\n", n, x);
}
return (0);
}
