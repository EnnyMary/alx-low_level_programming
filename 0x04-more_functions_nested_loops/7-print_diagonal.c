#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry
 * @n: param
 * Return: void
 */

void print_diagonal(int n)
{
	int d = 1, s;

	if (n > 0)
	{
		while (d <= n)
		{
			if (d > 1)
			{
				s = d - 1;
				while (s > 0)
				{
					_putchar(' ');
					s--;
				}
				_putchar('\\');
			}
			else
			 	_putchar('\\');
			 _putchar('\n');
			 d++;
		}
	}
	else
		_putchar('\n');
}
