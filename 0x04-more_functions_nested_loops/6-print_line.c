#include "main.h"
/**
 * print_line - printing lines
 * @n: number of times
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
