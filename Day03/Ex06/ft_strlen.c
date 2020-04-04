#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb < 0)
    {
      ft_putchar('-');
      nb = -nb;
    }
  if(nb / 10 != 0)
    {
      ft_putnbr(nb / 10);
    }
  ft_putchar((nb % 10) + 48);
}

int ft_strlen(char *str)
{
  int len = 0;
  while(*str != '\0')
    {
      str++;
      len++;
    }
  ft_putnbr(len);
  return len;
}

int main(void)
{
  char *str = "hello world";
  ft_strlen(str);
  return (0);
}
