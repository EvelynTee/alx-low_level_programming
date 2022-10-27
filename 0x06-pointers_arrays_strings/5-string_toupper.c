#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s: string
 * Return: char
 */
char *string_toupper(char *s)
{

	int y;

y = 0;

	while (*(s + y))
	{
		if (*(s + y) >= 'a' && *(s + y) <= 'z')
			*(s + y) -= 'a' - 'A';
		i++;
	}
	return (s);
}
