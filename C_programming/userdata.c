#include <stdio.h>
/**
 * main - this program make us of input and output function
 * Date: 18-02-2023
 * Return: 0 after compilation
 */

int main(void)
{
	char userName[20];
	int age;


	printf("what is your name?\n");
	fgets(userName, sizeof(userName),stdin);

	printf("How old are you?\n");
	scanf("%d", &age);

	printf("your name is %s and you are %d years old\n", userName, age);
	return (0);
}
