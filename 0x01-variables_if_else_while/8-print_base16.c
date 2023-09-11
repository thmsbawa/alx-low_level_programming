#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexdigits;

	for (hexdigits = '0'; hexdigits <= 'f'; hexdigits++)
	{
		if ((hexdigits >= '0' && hexdigits <= '9') || (hexdigits >= 'a' &&
		hexdigits <= 'f'))

		putchar(hexdigits);
	}
	putchar('\n');
	return (0);
}
