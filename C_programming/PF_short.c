#include <stdio.h>

/**
 * main - Compute prime factor of a number
 *
 * Return: 0 on success
 */
int main(void)
{
	long int num = 612852475143;
	long int i, j, notprime = 0;
	long int largest = 0;

	for (i = 2; i <= (50829599); i++)
	{
		if (num % i == 0)
		{
			for (j = 2; j <= (i / 2); j++)
			{
				if (i % j == 0)
				{
					notprime = 1;
					break;
				}
				else
					notprime = 0;	
			}
		}
		if (notprime == 0 && (num % i) == 0)
		{
			if (largest <= i)
				largest = i;
		}		
	}
	printf("%lu\n", largest);
	return (0);
}
