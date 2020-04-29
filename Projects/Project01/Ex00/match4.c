#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Function 1 = writes a character at a time.
Function 2 = starts pointer at first number or alphabet char. returns int.
Function 3 = ends pointer at last num or alph char. returns int.
Function 4 = formats a string by getting rid of spaces. returns a string.
Function 5 = counts the number of '*' in a string. returns an int.
Function 6 = finds out whether two strings match. returns 1 if they do.
*/

//Ft 1
void ft_putchar(char c)
{
  write(1, &c, 1);
}

//Ft 2
int ft_start(char *str)
{
  int i = 0;
  while(str[i] != '\0' && str[i] == ' ')
    {
      i++;
    }
  return i;
}

//Ft 3
int ft_end(char *str)
{
  int i = strlen(str);
  while(str[i - 1] == ' ')
    {
      i--;
    }
  return i;
}

//Ft4
char* format_str(char *str)
{
  int i = 0;
  int start = ft_start(str);
  int end = ft_end(str);
  char *formatted_str;
  formatted_str = malloc(sizeof(char) * ((end - start) + 1));
  while(start < end)
    {
      formatted_str[i] = str[start];
      i++;
      start++;
    }
  formatted_str[i] = '\0';
  return formatted_str;
}

//Ft 5
int star_count(char *str)
{
  int i = 0;
  int counter = 0;
  str = format_str(str);
  while(str[i] != '\0')
    {
      if(str[i] == '*')
        {
          counter++;
        }
      i++;
    }
  return counter;
}

//Ft 6
int match(char *s1, char *s2)
{
  int counter = 0;
  char *str1 = format_str(s1);
  char *str2 = format_str(s2);
  int length = strlen(str2);
  int length2 = strlen(str1);
  int i = strlen(str1);
  int x = strlen(str2);
  if(str2 == NULL || (strlen(str1)) < ((strlen(str2)) - star_count(str2)))
    {
      return 0;
    }
  while(i > 0)
    {
      if(str1[i] == str2[x])
        {
          counter++;
        }
      i--;
      x--;
    }
  if(counter == length && counter == length2)
    {
      return 1;
    }
  i = strlen(str1);
  x = strlen(str2);
  counter = 0;
  while(i > 0 && x > 0)
    {
      if(str1[i] == str2[x])
	{
	  counter++;
	}
      if(str1[i] != str2[x] && str2[x] == '*' && (str1[i - 1] == str2[x - 1] || str2[i - 1] == '*'))
	{
	  counter++;
	}
      i--;
      x--;
    }
  if(counter == length)
    {
      return 1;
    }
  return 0;
}

int main(int argc, char *argv[])
{
  if(argc == 3)
    {
      int returned = match(argv[1], argv[2]);
      if(returned == 1)
	{
	  printf("Strings Do Match (%d)\n", returned);
	}
      else
	{
	  printf("Strings Do Not Match (%d)\n", returned);
	}
    }
  return 0;
}
