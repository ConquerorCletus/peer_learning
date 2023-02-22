#include <unistd.h>
/**
 * _putchar- print out the value of char
 * @c- parameter that is printed
 * Return:1 
 */

int _putchar(char c);
{
	return (write(1, &c, 1));
}
