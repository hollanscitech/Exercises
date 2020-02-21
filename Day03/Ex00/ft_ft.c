#include <unistd.h>

void ft_ft(int *nbr)
{
  int x;
  x = 42;
  nbr = &x;
  *nbr = 42;
  {
    printf("%d\n", *nbr);
  }
}

int main(void)
{
  ft_ft();
}
