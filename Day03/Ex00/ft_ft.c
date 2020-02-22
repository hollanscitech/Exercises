#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int x = 42;
  nbr = &x;
  ft_ft(&x);
  printf("%d\n", x);
  return 0;
}  

void ft_ft(int *nbr)
{
  *nbr = 'x';
}
