#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int x;
  int *nbr;
  x = 42;
  nbr = &x;

  ft_ft(0);
  {
    printf("%d\n", x);
  }
}
