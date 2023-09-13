#include "main.h"

/**
 * print_sign - outputs the sign of an intiger
 * @n: is an int argument for print_sign
 * Return: 1 if n is positive 0 if is 0 and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
