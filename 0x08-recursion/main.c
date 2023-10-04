#include "main.h"
#include <stdio.h>

int main(void)
{
	int n;

	n = factorial(0);
	_putchar('0' + n);
	n = factorial(1);
        _putchar('0' + n);
	n = factorial(5);
        printf("%d\n", n);
	_putchar('\n');
	return 0;
}
