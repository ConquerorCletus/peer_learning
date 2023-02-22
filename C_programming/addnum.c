#include <stdio.h>
/** main - This program would add 2 number by calling the add function.
 * Return:0
 */

int add(int a, int b)
{
	int n;
	n = a + b;
	return n;
}
int main(void)
{
	int a;

	a = add(8, 9);
	printf("%d\n", a);
	return (0);
}
