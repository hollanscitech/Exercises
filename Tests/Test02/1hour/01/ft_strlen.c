#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 1;
  while(str[i] != '\0')
    {
      i++;
    }
    printf("%d", i);
  return 0;
}

int main(void)
{
  ft_strlen("hello world");
  return 0;
}
    
    
