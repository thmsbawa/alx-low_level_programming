#include "main.h"

/**
 * print_to_98 - outputs all ints from n to 98
 * @n: is an int
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar('0' + n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else 
	{
		for (n = n; n >=98; n--)
		{
			_putchar('0' + n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
