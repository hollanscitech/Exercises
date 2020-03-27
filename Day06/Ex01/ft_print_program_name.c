#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
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

int main(int argc, char *argv[])
{
  argc = 0;
  ft_putstr(*argv);
  return 0;
}

/*

HORIZONTAL EFFECT OF X,Y.

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int argc, char *argv[])
{
  int x = 0;
  int i = 0;
  while(i < argc)
    {
      ft_putchar(*(*(argv + x) + i));
      i++;
      x++;
    }
  return 0;
}

*/
