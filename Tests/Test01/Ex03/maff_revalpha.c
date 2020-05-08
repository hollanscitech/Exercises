#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(void)
{
  char c = 122;
  while (c >= 97)
  {
    if (c % 2 == 0)
      {
	ft_putchar(c);
      }
    else 
      {
	ft_putchar(c - 32);
      }
    c--;
  }
  ft_putchar('\n');
  return (0);
}
