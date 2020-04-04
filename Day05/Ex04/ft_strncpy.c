#include <stdio.h>

char *ft_strncpy(char *destination, char *source, unsigned int n)
{
  if (destination == 0)
    {
      return (0);
    }
  char *ptr = destination;
  while (*source && n--)
    {
      *destination = *source;
      destination++;
      source++;
    }
  *destination = '\0';
  return ptr;
}

int main(void)
{
  char *source = "hello world";
  char destination[0];
  int num = 5;
  printf("%s", ft_strncpy(destination, source, num));
  return (0);
}

//
