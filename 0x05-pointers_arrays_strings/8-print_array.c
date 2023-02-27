#include "main.h"
/**
 * print_array - function that prints a elements of an array
 * @b: array name
 * @a: is the number of elements of the array to be printed
 * Return: b and a inputs
 */
void print_array(int *b, int a)
{
	int i;

	for (i = 0; i < (a - 1); i++)
	{
		printf("%d, ", b[i]);
	}

		if (i == (a - 1))
		{
			printf("%d", b[a - 1]);

		}

		printf("\n");

}

