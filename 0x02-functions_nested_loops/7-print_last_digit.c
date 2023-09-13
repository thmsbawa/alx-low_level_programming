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
		n = n * -1;
	}

	_putchar ((n % 10) + '0');
	return (n % 10);
}
