#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
  return;
}

void ft_is_negative(int n)
{
  char ch;
  if (ch >= 0)
    {
      ft_putchar("P");
    }
  if (ch < 0)
    {
      ft_putchar("N");
    }
}

int main(void)
{
  ft_is_negative();
}
