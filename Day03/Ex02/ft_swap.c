#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int x;
  x = *a;
  *a = *b;
  *b = x;
}

int main(void)
{
  int num1, num2;
  num1 = 10;
  num2 = 20;
  ft_swap(&num1, &num2);
  printf("%d\n, %d\n", num1, num2);
  return 0;
}
