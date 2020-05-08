#include <unistd.h>

void ft_put_char(char a)
{
  write(1, &a, 1);
}

void ft_print_numbers(void)
{
  int x;
  x = '0';
  while(x <= '9')
    {
      ft_put_char(x);
      x++;
   }
}


int main(void)
{
  ft_print_numbers();
  return (0);
}
