#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int x;
  x = 42;
  ft_ft(&x);
  printf("x = %d", x);
}  
