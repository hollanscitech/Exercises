#include <stdio.h>
#include <limits.h>

int max(int *tab, unsigned int len)
{
  int biggest = INT_MIN;
  int i = 0;

  while (i < len)
    {
      if (tab[i] > biggest){
	biggest = tab[i];
      }
      i++;
    }
  return biggest;
}

int main(void)
{
  int array[4] = {-20, -2, -100, -4};

  printf("%d\n", max(array, 4));
}
