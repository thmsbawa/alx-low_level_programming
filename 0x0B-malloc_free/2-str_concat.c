#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 && s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int s1count, s2count, sizeBuffer, i;

	/*Check for valid strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1count = 0; s1[s1count]; s1count++)
	{
		;
	}
	for (s2count = 0; s2[s2count]; s2count++)
	{
		;
	}
	sizeBuffer = s1count + s2count + 1;
	ptr = malloc(sizeBuffer * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeBuffer; i++)
	{
		i < s1count ? (ptr[i] = s1[i]) : (ptr[i] = s2[i - s1count]);
	}
	return (ptr);
}
