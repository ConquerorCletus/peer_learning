#include <stdio.h>
/**
 * main - program counts from 1 to 99
 * Date:20-02-2023
 * Return:0
 */
int main(void)
{
	int a, b;

	for (a = 0 ; a <= 9; a++)
		for (b = a + 1 ; b <= 9; b++)
			printf("%d%d, ", a, b);
	putchar('\n');
	return (0);
}
