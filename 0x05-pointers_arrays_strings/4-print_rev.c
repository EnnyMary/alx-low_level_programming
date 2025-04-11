#include <stdio.h>
#include "main.h"

/**
 * print_rev - entry
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int a;
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (a = len; a >= 0; a--)
		printf("%c", s[a]);
	printf("\n");
}
