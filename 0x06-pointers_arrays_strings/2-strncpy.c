#include "main.h"

/**
 * _strncpy - copies a string
 * @src: the source of string
 * @dest: the destination of string
 * @n: the length of int
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + x) = *(src + x);
	}
	for (; x < n; x++)
	{
		*(dest + x) = '\0';
	}
	return (dest);
}
