#include <unistd.h>

void ft_putchar(char a)
{
  write(1, &a, 1);
}

int ft_GetHeight(int size)
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
  int width;
  int counter;
  int difference;
  if (size == 0)
    {
      return (0);
    }
  width = 7;
  counter = 1;
  difference = 12;
  while (counter < size)
    {
      width += difference;
      if (counter % 2 == 1)
	{
	  difference += 2;
	}
      else
	{
	  difference += (counter + 2);
	}
      counter++;
    }
  return width;
}

void sastantua(int size)
{
  int height = ft_GetHeight(size);
  int width = ft_GetWidth(size);
  int y = 0;
  int x = 0;
  while (y < height)
    {
      x = 0;
    while (x < width)
      {
        ft_putchar(42);
        x++;
      }
    ft_putchar('\n');
    y++;
    }

}

int main(void)
{
  sastantua(1);
  return 0;
}


