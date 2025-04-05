#include <stdio.h>
#include "main.h"

/**
 * more_numbers - entry
 * Return: 0
 */

void more_numbers(void)
{
	int a = 0;
	int s;

	while (a < 10)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s >= 10)
				_putchar('1');
			_putchar('0' + (s % 10));
		}
		_putchar('\n');
		a++;
	}
}
