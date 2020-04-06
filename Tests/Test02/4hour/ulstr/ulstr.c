#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
    {
      if(str[i] >= 'A' && str[i] <= 'Z')
	{
	  ft_putchar(str[i] + 32);
	  i++;
	}
      else
	{
	  while(str[i] >= 'a' && str[i] <= 'z')
	    {
	      ft_putchar(str[i] - 32);
	      i++;
	    }
	  ft_putchar(str[i]);
	  i++;
	}
    }
  ft_putchar('\n');
}

int main(void)
{
  char str[] = "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification.";
  ft_putstr(str);
  return 0;
}
