#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
  int x;
  x = ft_recursive_factorial(5);
  printf("%d\n", x);
  return 0;
}

int ft_recursive_factorial(int nb)
{
  if (nb == 0)
    return 1;
  return nb * ft_recursive_factorial(nb - 1);
}
