#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - is a program that prints the amount of coins from cents
 * @argc: argument count
 * @argv: argument vector
(*
 * Return: 0 on success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int coins, cents, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (argc == 2)
	{
		coins = 0;
		for (; cents >= 25; cents -= 25)
			coins++;
		for (; cents >= 10; cents -= 10)
			coins++;
		for (; cents >= 5; cents -= 5)
			coins++;
		for (; cents >= 2; cents -= 2)
			coins++;
		for (; cents >= 1; cents -= 1)
			coins++;
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
