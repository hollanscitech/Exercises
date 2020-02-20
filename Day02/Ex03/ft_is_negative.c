#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
  return;
}

void ft_is_negative(int n)
{
  char ch;
  ch n;
  int n;
  if (n >= 0)
    {
      ft_putchart("P");
    }
  if (n < 0)
    {
      ft_putchar("N");
    }
}

int main(void)
{
  ft_is_negative();
}
