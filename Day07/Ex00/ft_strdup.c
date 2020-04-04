#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src)
{
  char* str;
  str = malloc(sizeof(char) * strlen(src) + 1);
  if(str == NULL)
    {
      return NULL;
    }
  int i;
  i = 0;
  while(src[i] != '\0')
    {
      str[i] = src[i];
      i++;
    }
  str[i] = '\0';
  return str;
}

int main(void)
{
  char src[] = "hello";
  char* str = ft_strdup(src);
  printf("%s", str);
  return 0;
}  
  
  
  

