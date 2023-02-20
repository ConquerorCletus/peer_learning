#include <stdio.h>
/**
 * main - This program prints out odd numbers from 0 to 10
 * Date: 20-02-2023
 * Return: 0 after compilation
 */
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		if (a % 2 == 1)
		{
			printf("%d \n", a);

		}
	return (0);
}
