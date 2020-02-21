#include <unistd.h>

void ft_ft(int *nbr)
{
  write(1, &nbr, 3);
  return;
}
int ft_ft()
{
  int x = 42;
  nbr = &x;
  return;
}

int main(void)
{
  ft_ft();
}
