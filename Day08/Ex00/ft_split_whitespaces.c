#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Function 1 = print char
Function 2 = starts pointer at first char 
Function 3 = ends pointer at last char
Function 4 = splits a string into words and separates them by one space char. returns that new string
Function 5 = counts the number of words in a string. returns that count
Function 6 = iterates malloc so the array string size matches the size of each word in the formatted string
Function 7 = creates an array of strings from a formatted string 
Function 8 = prints chars of an array of strings 
*/

//Ft 1
void ft_putchar(char c)
{
  write(1, &c, 1);
}

//Ft 2 
int ft_format_start(char *str, int start_index)
{
  int i = start_index;
  while(str[i] != '\0' && str[i] == ' ')
    {
      i++;
    }
  return i;
}

//Ft 3
int ft_format_end(char *str, int end_index)
{
  int i = end_index;
  while(str[i] == ' ')
    {
      i--;
    }
  return i;
}

//Ft 4
char *ft_format_str(char *str, int start_index, int end_index)
{
  char* formatted_str;
  formatted_str = malloc(sizeof(char) * (ft_format_end(str, end_index) + 1));
  int start = ft_format_start(str, start_index);
  int end = ft_format_end(str, end_index);
  int n = 0;
  while(start <= end)
    {
      while(str[start] == ' ')
        {
          start++;
          if(str[start] != ' ')
            {
	      formatted_str[n] = ' ';
	      n++;
              formatted_str[n] = str[start];
            }
        }
      formatted_str[n] = str[start];
      start++;
      n++;
    }
  formatted_str[n] = '\0';
  return formatted_str;
}

//Ft 5
int ft_count_words(char *formatted_str)
{
  int i = 0;
  int words = 1;
  while(formatted_str[i] != '\0')
    {
      if(formatted_str[i] == ' ')
	{
	  words++;
	}
      i++;
    }
  return words;
}

//Ft 6
int mall_index(char *formatted_str, int iterator)
{
  int words = 0;
  int i = 0;
  int counter = 0;
  while(words <= iterator)
    {
      while(formatted_str[i] != ' ' && formatted_str[i] != '\0')
        {
          i++;
          counter++;
        }
      i++;
      words++;
    }
  return counter;
}

//Ft 7
char **ft_make_arr(char *formatted_str)
{
  char** str_arr;
  const int nWords = ft_count_words(formatted_str);

  str_arr = malloc(sizeof(char*) * (nWords + 1));

  int x = 0;
  int y = 0;
  int i = 0;

  while(y < nWords)
    {
      x = 0;
      char *str;
      str = malloc(sizeof(char) * (mall_index(formatted_str, y) + 1));
      while(formatted_str[i] != ' ' && formatted_str[i] != '\0')
	{
	  str[x] = formatted_str[i];
	  x++;
	  i++;
	}
      str[x] = '\0';
      str_arr[y] = str;
      y++;
      i++;
    }

  str_arr[y] = NULL;
  return str_arr;
}

//Ft 8 
void ft_print(char **str_arr)
{
  int x = 0;
  int y = 0;
  while(str_arr[y] != NULL)
    {
      x = 0;
      while(str_arr[y][x] != '\0')
	{
	  ft_putchar(str_arr[y][x]);
	  x++;
	}
      ft_putchar('\n');
      y++;
    }
}

int main(void)
{
  char str[] = "     Hello  World     ";
  int start_index;
  int end_index;
  start_index = 0;
  end_index =  21;
  char *formatted_str = ft_format_str(str, start_index, end_index);
  ft_print(ft_make_arr(formatted_str));
  return 0;
}
