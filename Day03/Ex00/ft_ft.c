#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int x;
  int  nbr = &x;
  x = 42;
  int *nbr = 42;
  ft_ft();
}
