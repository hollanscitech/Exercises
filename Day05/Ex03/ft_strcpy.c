#include <stdio.h>

char *ft_strcpy(char *destination, char *source)
{
  if (destination == 0)
    {
      return 0;
    }
  char *ptr = destination;
  while (*source != '\0')
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
  char source[] = "Hello";
  char destination[0];
  printf("%s\n", ft_strcpy(destination, source));
  return (0);
}

