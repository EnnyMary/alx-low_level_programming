#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry
 * @n: param
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 97)
		{
			if (n >= 10 && n < 100)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else if (n >= 100)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
				_putchar('0' + (n % 10));
			}
			else
				_putchar('0' + n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
	else
	{
		while (n < 99)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n <= -10)
				{
					_putchar('0' + (-n / 10));
					_putchar('0' + (-n % 10));
				}
				else
					_putchar('0' + (-n));
			}
			else
			{
				if (n >= 10)
				{
					_putchar('0' + (n / 10));
					_putchar('0' + (n % 10));
				}
				else
					_putchar('0' + n);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;

		}
		_putchar('\n');
	}
}
