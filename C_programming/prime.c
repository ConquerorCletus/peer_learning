#include <stdio.h>

int main()
{
  int i, j, valid;

  for (i = 2; i <= 200; i++)
  {
    valid = 1;

    for (j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        valid = 0;
        break;
      }
    }
    if (valid == 1)
    {
      putchar(','),
      putchar(' ');
      printf("%d", i);
    }
  }

  return (0);
}