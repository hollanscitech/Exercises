#include <unistd.h>

void ft_putchar(char a)
{
  write(1, &a, 1);
  return;
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

void main(void)
{
  ft_print_numbers(void); 
}
