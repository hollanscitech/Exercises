#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//create enough memory equal to string1, copy the string1 to the pointer returned by malloc

char *ft_strdup(char *src)
{
  char* str;
  str = malloc(sizeof(char) * strlen(src) + 1);
  if(str == 0)
    {
      return 0;
    }
  int i;
  i = 0;
  while(src[i] != 0)
    {
      str[i] = src[i];
      i++;
    }
  str[i] = '\0';
  free(str);
  return str;
}

int main(void)
{
  char src[] = "hello";
  char* str = ft_strdup(src);
  printf("%s", str);
  return 0;
}  
  
  
  

