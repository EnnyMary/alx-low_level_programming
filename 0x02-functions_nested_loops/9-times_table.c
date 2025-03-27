#include <stdio.h>
#include "main.h"

/**
 * times_table - entry
 * Return: void
 */

void times_table(void)
{
	int n = 0;
	int a, mul;

	while (n < 10)
	{
		a = 0;
		while (a < 10)
		{
			mul = n * a;
			if (mul >= 10)
			{
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
			else
				_putchar('0' + mul);
			if (a != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul < 10)
				 _putchar(' ');
			a++;
		}
		_putchar('\n');
		n++;
	}
}
