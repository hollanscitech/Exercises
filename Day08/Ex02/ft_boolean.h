#include <unistd.h>
#include <stdbool.h>
#ifndef FT_BOOLEAN_H

void ft_putstr(char *str)
{
  while(*str)
    {
      write(1, str++, 1);
    }
}

_Bool ft_is_even(int nbr)
{
  return ((nbr % 2) ? true : false);
}

int main(int argc, char **argv)
{
  (void)argv;
  if(ft_is_even(argc - 1) == true)
    {
      ft_putstr("I have an even number of arguments.");
    }
  else
    {
      ft_putstr("I have an odd number of arguments.");
    }
  return (0);
}

#endif
