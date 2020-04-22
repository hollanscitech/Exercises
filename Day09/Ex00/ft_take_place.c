#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
Function 1 = turns characters into integers
Function 2 = turns 24hr format into AM PM format
*/

//Ft 1
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

//Ft 2
void ft_takes_place(int hour)
{
  int hours = hour / 100;
  int minutes = hour % 100;
  int hours_plus = hours + 1;
  char *abb1 = "PM";
  char *abb2 = "PM";
  if(hours == 24 || hours == 0)
    {
      hours = 12;
      abb1 = "AM";
    }
  if(hours_plus >= 24)
    {
      hours_plus = 12;
      abb2 = "AM";
    }
  if(hours >= 0 && hours < 12)
    {
      abb1 = "AM";
    }
  if(hours_plus >= 0 && hours_plus < 12)
    {
      abb2 = "AM";
    }
  if(hours >= 13 && hours <= 23)
    {
      hours = hours - 12;
    }
  if(hours_plus >= 13 && hours_plus <= 23)
    {
      hours_plus = hours + 1;
    }
  if(hours_plus == 13)
    {
      hours_plus = 01;
    }
  if(minutes == 0)
    {
      printf("THE FOLLOWING TAKES PLACE BETWEEN %d:00 %s AND %d:00 %s \n", hours, abb1, hours_plus, abb2);
    }
  else
    {
      printf("THE FOLLOWING TAKES PLACE BETWEEN %d:%d %s AND %d:%d %s \n", hours, minutes, abb1, hours_plus, minutes, abb2);
    }
}

int main(void)
{
  char *str;
  int hour;
  str = "2359"; //Input time HHMM. (HH >= 00 <= 23) (MM >= 00 <= 59)
  hour = ft_atoi(str); //include HHMM in 24hr format between 0000 and 2400.
  ft_takes_place(hour);
  return 0;
}
