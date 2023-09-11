#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
	
		for (digit2 = '0'; digit2 <= '9';  digit2++)
		{
			putchar(digit1);
			putchar(',');
			putchar(' ');
			putchar(digit2);
		}

	}
	return (0);
}

