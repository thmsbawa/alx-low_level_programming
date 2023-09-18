#include <stdio.h>

/**
 * swap_int - swaps the value of two ints
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
