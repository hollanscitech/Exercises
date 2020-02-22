#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int nbr, x;
  nbr = &x;
  ft_ft(&x);
  printf("%d\n", x);
}  

void ft_ft(int *nbr)
{

  *nbr = 42;
}
