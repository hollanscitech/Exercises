#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int *nbr, x;
  x = 42;
  nbr = &x;
  ft_ft(&x);
}  

void ft_ft(int *nbr)
{
  printf("%d\n", *nbr);
}
