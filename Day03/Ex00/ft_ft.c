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
  ft_ft("x = 42");
}
