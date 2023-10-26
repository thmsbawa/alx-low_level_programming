#include <stdio.h>

void rev_string(char *s)
{
	int i = 0;
	int j, temp;

	while (*s != '\0')
	{
		temp = s[i];
		i++;
	}
	j = i - 1;
	while (*s != 0)
	{
		s[i] = s[j];
		s--;
	}
	s[j] = temp;
}
	

