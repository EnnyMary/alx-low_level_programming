#include <stdio.h>
#include "main.h"

/**
 * rev_string - entry
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, end;
	int beg = 0, temp;

	while (s[len] != '\0')
		len++;

	end = len - 1;

	while (beg < end)
	{
		temp = s[beg];
		s[beg] = s[end];
		s[end] = temp;

		beg++;
		end--;
	}
}
