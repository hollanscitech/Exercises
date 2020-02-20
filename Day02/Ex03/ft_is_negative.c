#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
  return;
}

void ft_is_negative(void)
{
  char ch;
  ch = '1';
  if (ch >= 0);
    {
      ft_putchar("P");
    }
    if (ch < 0);
    {
      ft_putchar("N");
    }
}

void ft_is_negative(int n)
	{
	  ch = n;
	}

int main (void)
{
  ft_is_negative(int n);
  return (0);
}
