#include <unistd.h>

void ft_putchar(int a)
{
  write(1, &a, 3);
  return;
}

void ft_ft(int *nbr)
{
  int x;
  x = '42';
  nbr = &x;
  {
    ft_putchar(x);
  }
}

int main(void)
{
  ft_ft();
}
