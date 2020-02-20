#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
  return;
}

void ft_is_negative(int n)
{
  char ch;
  ch = '1';
  if(n >= 0)
    {
      ft_putchar('P');
    }
  else(n = -1);
    {
      ft_putchar('N');
    }
}

int main(void)
{
  ft_is_negative(0);
}
