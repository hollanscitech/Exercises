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
  if(ch >= '0')
    {
      ft_putchar('P');
    }
  else(ch < 0);
    {
      ft_putchar('N');
    }
}

int main(void)
{
  ft_is_negative();
}
