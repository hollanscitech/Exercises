#include <unistd.h>
#include <stdio.h>

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
  int i = argc;
  while((i - 1) < argc && argc > 1)
    {
      i--;
      argc--;
      //printf("%s\n", argv[i]);
      ft_putstr(argv[i]);
      ft_putchar('\n');
    }
  return 0;
}
