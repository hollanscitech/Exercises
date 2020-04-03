#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int* arr;
  arr = malloc(sizeof(int) * max);
  if(arr == 0)
    {
      return 0;
    }
  int i = min;
  *arr = i;
  while(i < max)
    {
      printf("%d ", i);
      i++;
    }
  return 0;
  free(arr);
}

int main(void)
{
  int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  ft_range(array[0], array[9]);
  return 0;
}


