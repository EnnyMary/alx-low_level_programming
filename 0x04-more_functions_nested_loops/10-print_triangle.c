#include <stdio.h>
#include "main.h"

/**
 * print_triangle - entry
 * @size: param
 * Return: void
 */

void print_triangle(int size)
{
	int a, s, d;

	if (size < 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (s = 1; s <= size; s++)
			{
				d = size - s;
				if (s < d)
					_putchar(' ');
				else
					_putchar('#');
				_putchar('\n');
			}
		}
	}
}
