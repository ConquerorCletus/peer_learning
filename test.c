#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int age;

	printf("What is your age? ");
	scanf("%d", &age);
	if (age < 10)
	{
		printf("You are too young\n");
	}
	else if (age >= 18)
	{
		printf("You are an adult\n");
	}
	else
	{
		printf("You are a child\n");
	}
	return (0);
}
