#include <unistd.h>

void ft_putchar(char a)
{
  write(1, &a, 1);
}

void sastantua(int size)
{
  int x = 0;
  int y = 0;
  size = (size) * (size) + 1;
  while (y < size)
    {
      ft_putchar(36);
      x++;
      y++;
    }
  ft_putchar('\n');
  x++;
}

int main(void)
{
  sastantua(3);
  return 0;
}
