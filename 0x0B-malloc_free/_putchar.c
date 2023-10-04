#include <unistd.h>
/**
 * _putchar - outputs a character to stdout
 *
 * Return: On success 1
 * On error: -1 is returned errno is set appropriately
 */
int _putchar(char c)
{
	 return (write(1, &c, 1));
}
