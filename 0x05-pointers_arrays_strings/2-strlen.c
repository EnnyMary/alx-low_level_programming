#include <stdio.h>
#include "main.h"

/**
 * _strlen - entry
 * @s: pointer
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
