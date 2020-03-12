#include <unistd.h>

void ft_putchar(char a)
{
  write(1, &a, 1);
}

void ft_putstr(char *str)
{
  int i = 0;
  while(str[i] != '\0')
    {
      ft_putchar(str[i]);
      i++;
    }
}

int main(void)
{
  ft_putstr("hello");
  return (0);
}
