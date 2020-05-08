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
Function 6 = searches for '*' within a string. returns pointer. 
Function 7 = (strstr) scans for a single character match between two strings. if there is a match, it will loop until the string chars no longer match . returns int.
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
int star_num(char *str)
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
char *find_char(char *str)
{
  str = format_str(str);
  char x = 'W';
  int i = 0;
  int n = 0;
  while(str[i] != '\0' && str[i] != x)
    {
      i++;
    }
  char *newstr;
  newstr = malloc(sizeof(char) * ((strlen(str) + 2) - i));
  while(str[i] != '\0')
    {
      newstr[n] = str[i];
      i++;
      n++;
    }
  newstr[n] = '\0';
  return newstr;
}

//Ft 7
int match(char *s1, char *s2)
{
  int i = 0;
  int counter = 0;
  char *str1 = format_str(s1);
  char *str2 = format_str(s2);
  int length = strlen(str2);
  if(str2 == NULL)
    {
      return 0;
    }
  if((strlen(str1)) < ((strlen(str2)) - star_num(str2)))
    {
      return 0;
    }
  while(str1[i] != '\0')
    {
      if(str1[i] == str2[counter])
	{
	  counter++;
	}
      i++;
    }
  if(counter == length)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int main(void)
{
  char *s1;
  char *s2;
  s1 = " Hello World    ";
  s2 = "  World   ";
  int returned = match(s1, s2);
  printf("%d\n", returned);
  printf("%s\n", find_char(s1));
  return 0;
}
