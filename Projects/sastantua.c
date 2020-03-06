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

int ft_GetWidth(int size)
{
  int height;
  int width;
  int counter;
  height = 3;
  width = 7;
  counter = 1;
  while (counter < size)
	{
	  width = width + 6 + (height * 2);
	  counter++;
	  height++;
	}
  return width;
}

void sastantua(int size)
{
  int height = ftGetHeight(size);
  printf("%d", height);
  printf("\n");
  int width = ft_GetWidth(size);
  printf("%d", width);
  printf("\n");
}

int main(void)
{
  sastantua(0);
  printf("\n");
  sastantua(1);
  printf("\n");
  sastantua(2);
  printf("\n");
  sastantua(3);
  printf("\n");
  sastantua(4);
  printf("\n");
  sastantua(5);
  return 0;
}

/*
if size = 1
height = 3
width = 7

if size = 2
height = 7
width = 19

if size = 3
height = 12
width = 33

if size = 4 
height = 18
width = 51

if size = 5
height = 25
width = 71

if size = 6
height = 33
width = ??

add 6 to previous width
start loop, adding two for every digit after the previous height
adding 6 only twice.

add 8 to previous width
start loop, adding two for every digit after the previous height
adding 8 only twice

.

*/
