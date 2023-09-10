#include <stdio.h>

/**
 * Entry point - Prints the size of various data types on computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int int1;
	char char1;
	float flt;
	long int int2;
	long long int int3;

	printf("Size of a char:%lu\n", (unsigned long)sizeof(char1));
	printf("Size of an int:%lu\n", (unsigned long)sizeof(int1));
	printf("Size of a long int:%lu\n", (unsigned long)sizeof(int2));
	printf("Size of a long long int:%lu\n", (unsigned long)sizeof(int3));
	printf("Size of a float:%lu\n", (unsigned long)sizeof(flt));
	return (0);
}
