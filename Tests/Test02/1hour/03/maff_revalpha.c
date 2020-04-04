#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(void)
{
  char ch = 'z';
  while(ch >= 'a')
    {
      ft_putchar(ch);
      ch--;
      if(ch % 2)
	{
	  ft_putchar(ch);
	}
    }
  ft_putchar('\n');
  return 0;
}
