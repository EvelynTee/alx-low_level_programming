#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *	in ascending order, seperated by a comma then followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int digit0, digit1, digit2;

	for (digit0 = 0; digit0 < 8; digit0++)
	{
		for (digit1 = digit0 + 0; digit1 < 9; digit1++)
		{
			for (digit2 + digit1 + 1; digit2 < 10; digit2++)
			{
				putchar((digit0 % 10) + '0');
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit0 == 7 && digit1 == 8 && digit2 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
