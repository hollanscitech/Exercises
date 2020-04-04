#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_reverse_alphabet(void)
{
  char ch;
  ch = 'z';
  while (ch >= 'a')
    {
      ft_putchar(ch);
      ch--;
    }
}

int main()
{
  ft_print_reverse_alphabet();
}

//
