#include "main.h"
void print_num(int num);

/**
 * times_table - outputs the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = j * i;

			print_num(result);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

/**
 * print_num - prints an int to stdout
 *
 * @num: parameter for function print_num
 * Return: nothing
 */
void print_num(int num)
{
	if (num < 10)
	{
		_putchar('0' + num);
	}
	else
	{
		_putchar('0' + num / 10);
		_putchar('0' + num % 10);
	}
}
