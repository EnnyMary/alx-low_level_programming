#include <stdio.h>
#include "main.h"

/**
 * print_square - entry
 * @size - param
 * Return: void
 */

void print_square(int size)
{
	int a, s;

	if (size < 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (s = 1; s <= size; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
