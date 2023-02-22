#include <stdio.h>
/**
 * main - program calculate area of a rectangle
 * Return: 0
 */
int AreaofRect(int length, int breadth)
{
	int area;
	area = length * breadth;
	return area;
}

int main(void)
{
	int l = 13;
	int b = 4;

	int area = AreaofRect(l, b);
	printf("%d\n", area);
}
