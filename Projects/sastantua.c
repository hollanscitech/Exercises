#include <unistd.h>

void ft_putchar(char a)
{
  write(1, &a, 1);
}

void sastantua(int size)
{
  int y = 0;
  int x = 0;
  while (y < size)
    { 
      x = 0;
      while (x < size)
       	{
     	  ft_putchar(47);
      	  x++;
          while (x < size)
    	    {
     	      ft_putchar(42);
     	      x++;
      	      while (x < size)
     	     	{
      	      	  ft_putchar(92);
    	       	  x++;
    	      	  while (x < size)
    	      	    {
    	    	      ft_putchar(' ');
    	    	      x++;
    	    	    }
    	    	}
     	    }
      	}
      ft_putchar('\n');
      y++;
    }
}

int main(void)
{
  sastantua(5);
  return 0;
}
