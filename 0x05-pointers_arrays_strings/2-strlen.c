#include "main.h"
/**
 * _strlen - returns the length of a string
 * @e: string
 * Return: lenght
 */
int _strlen(char *e)

{
	int longi = 0;

	while (*e != '\0')

	{

		longi++;
		e++;
	}
	return (longi);
}
