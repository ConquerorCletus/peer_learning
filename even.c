#include <stdio.h>
/**
 * main - print out even numbers 0 to 10
 * Date: 20-02-2023
 * Return:0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		if (a % 2 == 0)
			printf("%d \n", a);
	}
	return (0);
}
