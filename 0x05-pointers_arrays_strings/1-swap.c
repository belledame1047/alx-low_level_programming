#include "main.h"
/**
 * swap_int- swaps the value of two integers
 * @a: int to swap
 * @b: int to swap
 * Return: 0
 */
void swap_int(int *a, int *b)

{

	int e;

	e = *a;
	*a = *b;
	*b = e;
}
