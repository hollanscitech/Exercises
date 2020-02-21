#include <unistd.h>

int ft_write(int a)
{
  write(1, &a, 2);
  return (0);
}

void ft_ft(int *nbr)
{
  int x;
  x = 42;
  nbr = &x;
  {
    ft_write(*nbr);
  }
}

int main(void)
{
  ft_ft();
}
