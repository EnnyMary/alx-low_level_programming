#include <stdio.h>
#include "main.h"

/*
 * swap_int - entry
 * @a: pointer
 * @b: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
