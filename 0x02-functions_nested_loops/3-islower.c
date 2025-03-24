#include <stdio.h>
#include "main.h"

/**
 * _islower - entry
 * @c: param
 * Return: 0,1
 */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
