/**
 * check_if_prime - checks to see if a number is a prime number
 * @n: number
 * @m: guess number
 *
 * Return: 1 if prime otherwise 0
 */
int check_if_prime(int n, int m)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	if (m == 1)
	{
		return (1);
	}
	if (m != n && n % m == 0)
	{
		return (0);
	}
	return (check_if_prime(n, m - 1));
}
/**
 * is_prime_number - checks to see if a number is a prime number
 * @n: number
 *
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_if_prime(n, (n / 2)));
}
