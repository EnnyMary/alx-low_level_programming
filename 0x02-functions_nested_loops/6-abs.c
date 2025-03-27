#include <stdio.h>
#include "main.h"

/**
 * _abs - entry
 * @c: param
 * Return: 0
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
