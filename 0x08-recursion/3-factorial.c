#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: number to be calculated
 *
 * Return: factorial of agiven number
 */

int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	result = n * factorial(n - 1);
	return (result);
}
