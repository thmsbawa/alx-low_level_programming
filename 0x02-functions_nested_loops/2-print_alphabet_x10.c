#include "main.h"
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet x10 to stdout
 *
 * return - Doesnt return anything
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
		_putchar('\n');
		i++;
	}
}
