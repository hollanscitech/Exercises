#include <stdio.h>

int ft_iterative_factorial(int b)
{
  int x = 1, i;
  for(i = 2; i <=nb; i++)
    x *= i;
  return x;
}

int main(void)
{
  ft_iterative_factorial(5);
  printf("%d\n", ft_iterative_factorial(5));
  return 0;
}
