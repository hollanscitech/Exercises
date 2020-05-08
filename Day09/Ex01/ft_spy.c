#include <unistd.h>

/*
Function 1 = writes characters 
Function 2 =
*/

//Ft 1
void ft_putchar(char c)
{
  write(1, &c, 1);
}

//Ft 2
void ft_spy(char *str)
{
  char search1[] = "president";
  char search2[] = "attack";
  char search3[] = "Powers";
  char *ptr = strstr(str, search);
  
  if (ptr != NULL) /* Substring found */
    {
      printf("'%s' contains '%s'\n", str, search);
    }
  return 0;
}


int main(int argc, char *argv[])
{
  int i = 1;
  while(i < argc)
    {
      ft_spy(argv[i]);
      i++;
      ft_putchar('\n');
    }
  return 0;
}

  
