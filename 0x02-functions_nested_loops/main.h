#include <unistd.h>

/*
 * _putchar - _putchar writes the char c to stdout
 *
 * Return: On success 1
 * on error, -1 is returned and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
