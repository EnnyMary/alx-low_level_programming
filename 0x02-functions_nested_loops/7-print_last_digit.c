#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - entry
 * @c: param
 * Return: 0
 */

int print_last_digit(int c)
{
	if (c < 0)
		return (-(c % 10));
	else
		return (c % 10);
}
