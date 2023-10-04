#include "main.h"

/**
 * sqrt_finder - finds the natural square root of a number
 * @n: number to be calculated
 * @m: guess number to help find the sqroot
(*
 * Return: squareroot of n
 */
int sqrt_finder(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m > n)
	{
		return (-1);
	}
	return (sqrt_finder(n, m + 1));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number to be calculated
(*
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (sqrt_finder(n, 1));
}
