#include <unistd.h>

void ft_ft(int *nbr)
{
  int x;
  x = 42;
  nbr = &x;
  *nbr = 42;
  {
    printf("%d\n", x);
  }
}

int main(void)
{
  ft_ft(int);
}
