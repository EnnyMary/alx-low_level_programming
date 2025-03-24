#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a = 0;
	char s;

	while (a < 10)
	{
		s = 'a';
		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		a++;
	}
}
