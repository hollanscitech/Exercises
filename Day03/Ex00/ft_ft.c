#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr)
{
  int x;
  nbr = &x;
  {
    printf("%d\n", *nbr);
  }
}

int main(void)
{
  x = 42;
  ft_ft(int x);
}
