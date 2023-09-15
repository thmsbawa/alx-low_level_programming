#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: lenght of line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k <= i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
	else
	_putchar('\n');
}
