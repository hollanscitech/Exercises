#include <unistd.h>
#include<stdio.h>

void ft_ft(int **nbr)
{
 int *nbr = 42;
 &nbr = **nbr;
}

int main(void)
{
  int x;
  ft_ft(&x);
  printf("%d\n", x);
}  
