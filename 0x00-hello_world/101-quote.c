#include <unistd.h>

/**
 * main -writing a program that printts a string to stderr
 *
 * Return: 1
 */
int main(void)
{
	int l = 60;

	write(2, "and that piece of art is useful\" - Dora Korpair, 2015-10-19\n", l);

	return (1);
}
