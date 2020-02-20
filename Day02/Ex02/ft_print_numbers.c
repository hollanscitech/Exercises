#include <unistd.h>

int ft_putchar(char a)
{
  write(1, &a, 1);
  return (0);
}

void ft_print_numbers(void)
{
  char ch;
  ch = '1';
  while(ch <= '9')
    {
      ft_putchar(ch);
      ch++;
    }
}

int main(void)
{
  ft_print_numbers(); 
}
