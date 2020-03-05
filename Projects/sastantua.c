#include <unistd.h>
#include <stdio.h>

void ft_putchar(char a)
{
  write(1, &a, 1);
}

int ftGetHeight(int size)
{
  int height;
  int counter;
  height = 0;
  counter = 1;
  while (counter <= size)
    {
      height = counter + height + 2;
      counter++;
    }
  return height;
}

void sastantua(int size)
{
  int height = ftGetHeight(size);
  printf("%d", height);
}

int main(void)
{
  sastantua(5);
  return 0;
}

