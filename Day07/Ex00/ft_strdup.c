#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*char *ft_strdup(char *org)
{
    int org_size;
    static char *dup;
    char *dup_offset;

    // Allocate memory for duplicate 
    org_size = strlen(org);
    dup = (char *)malloc(sizeof(char)*org_size+1);
    if( dup == NULL)
        return( (char *)NULL);

    // Copy string 
    dup_offset = dup;
    while(*org)
    {
        *dup_offset = *org;
        dup_offset++;
        org++;
    }
    *dup_offset = '\0';

    return(dup);
}

int main(void)
{
  char original[12] = "hello";
  char *duplicate;
  int o_len,d_len;
  
  duplicate = ft_strdup(original);
  o_len = strlen(original);
  d_len = strlen(duplicate);
  
  printf("Original String: '%s' (%d)\n", original,o_len);
  printf("Duplicate string: '%s' (%d)\n", duplicate,d_len);
  return(0);
}
*/

/*
char *ft_strdup(char *src)
{
  char *str;
  char *p;
  int len = 0;

  while(src[len])
    {
      len++;
    }
  str = malloc(len + 1);
  p = str;
  while (*src)
    {
      *p++ = *src++;
    }
  *p = '\0';
  return str;
}

int main(void)
{
  char org[] = "hello";
  char *dup;
  dup = ft_strdup(org);
  printf("%s", dup);
  return (0);
}
*/

//create enough memory equal string1, copy the s1 to the pointer returned byu malloc

char *ft_strdup(char *src)
{
  char* str;
  str = malloc(sizeof(char));
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
  
  
  

