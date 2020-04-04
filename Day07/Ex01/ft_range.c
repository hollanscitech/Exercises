#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int* arr;
  arr = malloc(sizeof(int) * (max - min));
  if(arr == NULL)
    {
      return NULL;
    }
  while(min < max)
    {
      int i = 0;
      arr[i] = min;
      printf("%d ", arr[i]);
      min++;
    }
  return arr;
  free(arr);
}

int main(void)
{
  int array[] = { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  ft_range(*array, 10);
  return 0;
}


