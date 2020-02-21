#include <unistd.h>

void ft_ft(int *nbr)
{
  int x = 42;
  nbr = &x;
  return;
}

int main(void)
{
  ft_ft(void);
}
