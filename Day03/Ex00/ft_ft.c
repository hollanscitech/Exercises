#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr)
{
  int x;
  nbr = &x;
  x = 42;
  {
    printf("%d\n", *nbr);
  }
}

int main(void)
{
  ft_ft();
  return 0;
}
