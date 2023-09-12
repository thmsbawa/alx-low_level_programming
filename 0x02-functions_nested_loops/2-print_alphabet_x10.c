#include "main.h"

/**
 * void print_alphabet_x10(void) - prints alphabet x10 to stdout
 *
 * return - Doesnt return anything
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	return;
}
