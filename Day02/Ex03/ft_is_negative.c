#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
  return;
}

void ft_is_negative(int n)
{
  char ch;
  if(n >= 0);
    {
      ft_putchar('P', n);
    }
    else(n < 0);
    {
      ft_putchar('N', n);
    }
}

int main(void)
{
  ft_is_negative();
}
