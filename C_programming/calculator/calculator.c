#include <stdio.h>
/**
 * main - This program is a calculator with 4 operators.
 * Return:0
 */

int main()
{
	char operator;

	printf("choose an operator ['+','-','/','*']: ");
			scanf("%c", &operator);

	double num1, num2;

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter second number: ");
	scanf("%lf", &num2);

	double result;

	switch(operator)
	{
	case '+':
	result = num1 + num2;
	break;
	case '-':
	result = num1 - num2;
	break;
	case '/':
	result = num1 / num2;
	break;
	case '*':
	result = num1 * num2;
	break;
	default:
	printf("invalid operator\n");
	break;
	}
	printf("%.2lf \n", result);
	return(0);
}

