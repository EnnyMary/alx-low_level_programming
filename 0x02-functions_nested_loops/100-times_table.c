#include <stdio.h>
#include "main.h"

/**
 * print_times_table - entry
 * @n: param
 * Return: void
 */

void print_times_table(int n)
{
	int b = 0;
	int a, mul;

	if (n < 16 && n > 0)
	{
		while (b <= n)
		{
			a = 0;
			while (a <= n)
			{
				mul = a * b;
				if (mul >= 10 && mul < 100)
				{
					_putchar('0' + (mul / 10));
					_putchar('0' + (mul % 10));
				}
				else if (mul >= 100)
				{
					_putchar('0' + (mul / 100));
					_putchar('0' + ((mul / 10) % 10));
					_putchar('0' + (mul % 10));
				}
				else
					_putchar('0' + mul);
				if (a != n)
				{
					_putchar(',');
					_putchar(' ');
					if (mul < 100)
						_putchar(' ');
					if (mul < 10)
						_putchar(' ');
				}
				a++;
			}
			_putchar('\n');
			b++;
		}
	}
	else
		_putchar('\n');
}
