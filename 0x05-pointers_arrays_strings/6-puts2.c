#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{

	int longi = 0;

	int e = 0;

	char *h = str;
	int a;

	while (*h != '\0')
	{
		h++;
		longi++;
	}

	e = longi - 1;
	for (a = 0 ; a <= e ; a++)

	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);

		}
	}
	_putchar('\n');
}
