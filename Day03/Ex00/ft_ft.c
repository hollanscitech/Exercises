#include <unistd.h>

void ft_write(int a)
{
  write(1, &a, 2);
  return;
}

void ft_ft(int *nbr)
{
  int x = 42;
  nbr = &x;
  {
    ft_write("%d\n", *nbr);
  }
}

int main(void)
{
  ft_ft();
  return 0;
}
