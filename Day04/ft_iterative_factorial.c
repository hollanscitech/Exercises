#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  int x = 1;
  int i = 2;
  while (i <= nb){
    x *= i;
    i++;}
  return x;
}

int main(void)
{
  ft_iterative_factorial(5);
  printf("%d\n", ft_iterative_factorial(5));
  return 0;
}
