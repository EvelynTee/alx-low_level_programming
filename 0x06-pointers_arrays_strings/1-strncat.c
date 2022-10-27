#include "main.h"

/**
 * _strncat - joins two strings
 * @src: the source of strings
 * @dest: the destination of string
 * @n: the length of int
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
