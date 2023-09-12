#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Doesnt return anything
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
