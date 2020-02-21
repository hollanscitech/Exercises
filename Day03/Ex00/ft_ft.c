#include <unistd.h>

void ft_write(int a)
{
  write(1, &a, 2);
  return;
}

void ft_ft(int *nbr)
{
  int x;
  x = 42;
  nbr = &x;
  *nbr = 42;
  {
    ft_write(x);
  }
}

int main(void)
{
  ft_ft();
}
