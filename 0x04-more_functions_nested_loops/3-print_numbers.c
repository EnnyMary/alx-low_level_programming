#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry
 * Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar('0' + a);
	_putchar('\n');
}
