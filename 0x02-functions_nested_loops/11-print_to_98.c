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
			_putchar('0' + n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		while (n < 99)
		{
			_putchar('0' + n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
}
