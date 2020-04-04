#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
  int x = 1;
  int i = 0;
  if (i > power)
    return 0;
  while (i < power)
    {
      x = x*nb;
      i++;
    }
  return x;
}

int main(void)
{
  int nb = 2;
  int power = 10;
  printf("%d\n", ft_iterative_power(nb, power));
  return 0;
}

//
