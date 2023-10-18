#include <stdio.h>
#include <stdlib.h>

int calc_coin1(int cents);
int calc_coin2(int cents);
int calc_coin3(int cents);
int calc_coin4(int cents);
int calc_coin5(int cents);

/**
 * main - is a program that prints the amount os coins owed
 * @argc: number of arguments passed to program
 * @argv: arguments passed to program
 * return: 0 on success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int coins, coin1, coin2, coin3, coin4, coin5, cents;

	cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin1 = calc_coin1(cents);
	cents = cents - coin1 * 25;
	
	coin2 = calc_coin2(cents);
	cents = cents - coin2 * 10;

	coin3 = calc_coin3(cents);
	cents = cents - coin3 * 5;

	coin4 = calc_coin4(cents);
	cents = cents - coin4 * 2;

	coin5 = calc_coin5(cents);
	cents = cents - coin5 * 1;

	coins = coin1 + coin2 + coin3 + coin4 + coin5;
	printf("%d\n", coins);
}

/**
 * calc_coin1 - calculates number of coins
 * @cents: amount of cents to compute coins from
(* 
 * return: number of coins
 */

int calc_coin1(int cents)
{
	int coin1 = 0;
	while (cents > 25)
	{
		cents = cents - 25;
		coin1++;
	}
	return (coin1);
}

/**
 * calc_coin2 - calculates number of coins
 * @cents: amount of cents to compute coins from
(* 
 * return: number of coins
 */

int calc_coin2(int cents)
{
	int coin2 = 0;
	while (cents > 10)
	{
		cents = cents - 10;
		coin2++;
	}
	return (coin2);
}

/**
 * calc_coin3 - calculates number of coins
 * @cents: amount of cents to compute coins from
(* 
 * return: number of coins
 */

int calc_coin3(int cents)
{
	int coin3 = 0;
	while (cents > 5)
	{
		cents = cents - 5;
		coin3++;
	}
	return (coin3);
}

/**
 * calc_coin4 - calculates number of coins
 * @cents: amount of cents to compute coins from
(* 
 * return: number of coins
 */

int calc_coin4(int cents)
{
	int coin4 = 0;
	while (cents > 2)
	{
		cents = cents - 2;
		coin4++;
	}
	return (coin4);
}

/**
 * calc_coin5 - calculates number of coins
 * @cents: amount of cents to compute coins from
(* 
 * return: number of coins
 */

int calc_coin5(int cents)
{
	int coin5 = 0;
	while (cents > 1)
	{
		cents = cents - 1;
		coin5++;
	}
	return (coin5);
}

