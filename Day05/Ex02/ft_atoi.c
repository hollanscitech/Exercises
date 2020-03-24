#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
  int i = 0;
  int number = 0;
  int sign = 1;
  while (str[i] != '\0' && (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v'))
    {
      i++;
    }
  if (str[i] == '-')
    {
      sign = -1;
      i++;
    }
  if (str[i] == '+')
  {
    i++;
  }
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      number = (number * 10) + str[i] - 48;
      i++;
    }
  return number * sign;
}

int main(void)
{
  printf("%d\n", ft_atoi("1234"));
  return (0);
}

/*
void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_atoi(char *str)
{
  int res = 0;
  int sign = 1;
  int i = 0;
  if (str[0] == '-')
    {
      sign = -1;
      i++;
    }
  for (; str[i] != '\0'; ++i)
    res = res*10 + str[i] - '0';
  return sign*res;
  ft_putchar(i);
}

int main(void)
{
  ft_atoi("-1234");
  return (0);
}
*/
