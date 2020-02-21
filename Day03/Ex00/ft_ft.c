#include <unistd.h>

void ft_ft(int *nbr)
{
  write(1, &nbr, 3);
  return;
}

void ft_ft(void)
{
  int a = 42;
  int *nbr = &a;
}

int main(void)
{
  ft_ft();
}
