#include <unistd.h>

void ft_put_char(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb < 0)
    {
      ft_put_char('-');
      nb = -nb;
    }
  if(nb / 10 != 0)
    {
      ft_putnbr(nb / 10);
    }
  ft_put_char((nb % 10) + '0');
}

int main(void)
{
  ft_putnbr(100);
  return (0);
}


/*
BASE = 10

  INITIALLY:

  n = 123,456
  exponent = 5 = ft_lengthInteger(123,456) - 1
  pow = 100,000 = (BASE, exponent)

  STEP 1:
  print(n / pow) | print(123,456 / 100,000) | print(1)
  n = 23,456 = n % 100,000
  pow = 10,000 = pow / 10


  STEP 2:
  print(n / pow) | print(23,456 / 10,000) | print(2)
  n = 3,456 = n % 10,000
  pow = 1,000 = pow / 10


  STEP 3:
  print(n / pow) | print(3,456 / 1,000) | print(3)
  n = 456 = n % 1,000
  pow = 100 = pow / 10


  STEP 4:
  print(n / pow) | print(456 / 100) | print(4)
  n = 56 = n % 100
  pow = 10 = pow / 10


  STEP 5:
  print(n / pow) | print(56 / 10) | print(5)
  n = 6 = n % 10
  pow = 1 = pow / 10

  STEP 6:
  print(n / pow) | print(6 / 1) | print(6)
  n = 0 = n % 1
  pow = 0 = pow / 10
  
*/
