#include <unistd.h>

void ft_call(int a)
{
  write(1, &a, 3);
  return;
}

void ft_ft(int *nbr)
{
  int x = 42;
  *nbr = x;
  {
    ft_call(*nbr &x);
  }
}

int main(void)
{
  ft_ft();
}
