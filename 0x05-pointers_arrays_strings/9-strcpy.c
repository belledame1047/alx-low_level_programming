#include "main.h"
/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;

	int u = 0;

	while (*(src + h) != '\0')

	{
		 h++;
	}

	for ( ; u < h ; u++)
	{
		dest[u] = src[u];
	}

	dest[h] = '\0';

	return (dest);

}
