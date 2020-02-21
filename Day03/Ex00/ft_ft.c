#include <unistd.h>

void ft_ft(int *nbr)
{
  write(1, &nbr, 3)
  return 0;
}

void ft_ft(int *nbr)
{
  int x = 42;
  nbr = &x;
  return;
}

int main(void)
{
  ft_ft();
}
