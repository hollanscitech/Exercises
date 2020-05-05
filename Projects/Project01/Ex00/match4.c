#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Function 1 = writes a character at a time.
Function 2 = counts the number of '*' in a string. returns an int.
Function 3 = finds the star character within a string, returns int.
Function 4 = matches if there are no chars in string or they are space chars
Function 5 = matches if there is no star and both strings are exactly the same
Function 6 = matches in cases when s2[0] is a star. "match" "*match"
Function 7 = finds out if two strings match when there is a star in s2
*/

//Ft 1
void ft_putchar(char c)
{
  write(1, &c, 1);
}

//Ft 2
int star_count(char *str)
{
  int i = 0;
  int counter = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '*')
        {
          counter++;
        }
      i++;
    }
  return counter;
}

//Ft 3
int find_char(char *str)
{
  char x = '*';
  int i = strlen(str) - 1;
  int counter = 0;
  while (i >= 0)
    {
      counter++;
      if (str[i] == x)
	{
	  return counter;
	}
      i--;
    }
  return 0;
}

//Ft 4
int match0(char *s1, char *s2)
{
  int x = 0;
  if (s1[x] == '\0' && s2[x] == '\0')
    {
      return 1;
    }
  return 0;
}

//Ft 5
int match1(char *s1, char *s2)
{
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int i1 = len1 - 1;
  int i2 = len2 - 1;
  int counter = 0;
  while (i1 >= 0 && i2 >= 0 && star_count(s2) == 0)
    {
      if (s1[i1] == s2[i2])
        {
          counter++;
	}
      i1--;
      i2--;
    }
  if (counter == len1 && counter == len2)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

//Ft 6
int match2(char *s1, char *s2)
{
  int counter  = 0;
  int round = -1;
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int i1 = len1 - 1;
  int i2 = len2 - 1;
  while (i1 >= 0 && i2 >= 0)
    {
      round++;
      if (s1[i1] == s2[i2])
        {
          counter++;
        }
      if (s1[i1] != s2[i2] && s2[i2] == '*' && counter == round && i2 == 0)
        {
          return 1;
        }
      i1--;
      i2--;
    }
  return 0;
}
      
//Ft 7
int match3(char *s1, char *s2)
{
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  int i1 = len1 - 1;
  int i2 = len2 - 1;
  int consi2 = i2;
  int counter  = 0;
  int x = 0;
  while (i1 >= 0 && i2 >= 0)
    {
      if (s1[i1] != s2[i2] && s2[i2] == '*')
	{
	  counter++;
	  while (x <= i2)
	    {
	      if (s1[x] == s2[x])
		{
		  counter++;
		}
	      x++;
	    }
	}
      i1--;
      i2--;
    }
  if (counter == len1 && i2 == 0 && s2[i2] == '*')
    {
      return 1;
    }
  if (counter == (consi2 + star_count(s2)))
    {
      return 1;
    }
  return 0;
}

int main(int argc, char *argv[])
{
  if (argc == 3)
    {
      int returned0 = match0(argv[1], argv[2]);
      int returned1 = match1(argv[1], argv[2]);
      int returned2 = match2(argv[1], argv[2]);
      int returned3 = match3(argv[1], argv[2]);
      if (returned0 || returned1 || returned2 || returned3 == 1)
	{
	  printf("Strings Do Match0 (%d)\n", returned0);
	  printf("Strings Do Match1 (%d)\n", returned1);
	  printf("Strings Do Match2 (%d)\n", returned2);
	  printf("Strings Do Match3 (%d)\n", returned3);
	}
      else
	{
	  printf("Strings Do Not Match0 (%d)\n", returned0);
	  printf("Strings Do Not Match1 (%d)\n", returned1);
	  printf("Strings Do Not Match2 (%d)\n", returned2);
	  printf("Strings Do Not Match3 (%d)\n", returned3);
	}
    }
  return 0;
}
