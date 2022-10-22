#include <stdio.h>

/**
 * main - Prints all combinations of single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 58; n++)
	{
		putchar ((n % 10) + '0');
		if (n == 58)
		{
			continue;
			putchar (',');
			putchar (' ');
		}

	putchar ('\n');

	return (0);
}
