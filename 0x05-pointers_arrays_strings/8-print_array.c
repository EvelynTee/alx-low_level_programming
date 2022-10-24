#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * @a: int to check
 * @n: int to check
 * Return: Success 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
		if (j != n - 1)
			printf("%d, ", a[j]);
		else
			printf("%d", a[j]);
	printf("\n");
}
