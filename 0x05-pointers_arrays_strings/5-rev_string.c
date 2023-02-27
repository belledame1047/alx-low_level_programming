#include "main.h"
/**
 * rev_string - reverse a string
 * @e: input string
 */
void rev_string(char *e)

{
	char rev = e[0];

	int counter = 0;

	int a;

	while (e[counter] != '\0')

		counter++;
	for (a = 0; a < counter; a++)

	{
		counter--;

		rev = e[a];

		e[a] = e[counter];

		e[counter] = rev;
	}

}

