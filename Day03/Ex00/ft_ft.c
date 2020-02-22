#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int nbr;
  int x;
  ft_ft(&x);
  *nbr = 42;
  printf("%d\n", x);
}  
