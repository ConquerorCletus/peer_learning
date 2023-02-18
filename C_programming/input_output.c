#include <stdio.h>
/**
 * main - this program make us of input and output function
 * Date: 18-02-2023
 * Return: 0 after compilation
 */
int main(void)
{
	char A, B, C;
	int age;

	scanf("%c%c%c%d", &A, &B, &C, &age);
	printf("my initial are: %c%c%c and my age is %d.\n", A, B, C, age);
	return (0);
}
