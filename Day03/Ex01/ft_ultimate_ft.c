#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;
}

int main(void)
{
  int a = 0;
  int *b = &a;
  int **c = &b;
  int ***d = &c;
  int ****e = &d;
  int *****f = &e;
  int ******g = &f;
  int *******h = &g;
  int ********i = &h;
  int *********j = &i;
  ft_ultimate_ft(j);
  printf("%d\n", *********j);
}
