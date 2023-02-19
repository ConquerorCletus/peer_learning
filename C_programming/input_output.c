#include <stdio.h>
/**
 * main - this program make us of input and output function
 * Date: 18-02-2023
 * Return: 0 after compilation
 */

int main(void)
{
	char userName;
	int age;


	printf("what is your name?\n and age");
	scanf("%c%c%c%c%c%c%c%c", &userName);

	printf("your name is %c%c%c%c%c%c%c  and you are %d years old\n", userName, age);
	return (0);
}
