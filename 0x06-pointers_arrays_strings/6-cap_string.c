#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: is a string
 *
 * Return: returns  a capitalize string
 */

char *cap_string(char *str)
{
	int i, n, capitalize;

	n = strlen(str);

	for (i = 0; i < n; i++)
	{
		if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.'
		|| str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize == 1 && isalpha(str[i])
		{
			str[i] = toupper(str[i]);
			capitalze = 0;
		}
		else
		str[i] = tolower(str[i]);
	}
	return (str);
}
