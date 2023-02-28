#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - programs that shows how a string is manipulated
 * Return:0
 */
int main(void)
{
	char a[20] = "HELLO";
	/*char b[20] = "WORLD";*/
	char c[20];
	/*int len;*/

	/*use of strcpy*/
	strcpy(c, a);
	printf("we copied a to c:%s\n", c);

	return (0);
}
