#include <unistd.h>

int ft_putchar(int a)
{
  write(1, &a, 1);
  return 0;
}

void ft_ft(int *nbr)
{
  int x;
  x = 42;
  nbr = &x;
  *nbr = 42;
  {
    ft_putchar("%d");
  }
}

int main(void)
{
  ft_ft(0);
}
