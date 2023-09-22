#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s\n", ptr);
	printf("%s\n", str);
	return 0;
}
