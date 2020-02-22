#include <unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);


int main(void)
{
  int x;
  x = 42;
  int *nbr;
  nbr = &x;
  ft_ft(nbr);
    {
      printf("nbr = %d", *nbr);
    }
}

