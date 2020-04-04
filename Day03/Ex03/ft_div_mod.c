#include <stdio.h>
#include <math.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a/b;
  *mod = a/b;
}

int main(void)
{
  int c = 7/3;
  float d = 0.00;
  d = (float)7/3;
  ft_div_mod(&c);
  printf("%d\n", c);
  ft_div_mod(&d);
  printf("%.2f\n", d-floor(d));
}

//unfinished
