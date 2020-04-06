#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void last_word(char *str)
{
  int i;
  i = strlen(str) - 1;
  while(str[i] != ' ')
    {
      i--;
    }
  while(str[i] != '\0')
    {
      i++;
      ft_putchar(str[i]);
    }
  ft_putchar('\n');
}

int main(void)
{
  char str[] = "one two three four";
  last_word(str);
  return 0;
}
