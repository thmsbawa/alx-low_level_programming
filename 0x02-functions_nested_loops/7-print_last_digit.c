#include "main.h"

/**
 * print_last_digit - outputs the last digit of a number
 * @n: is an int argument for the function
 * Return: an int
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	n = n % 10;

	_putchar (n + '0');
	return (n);
}
