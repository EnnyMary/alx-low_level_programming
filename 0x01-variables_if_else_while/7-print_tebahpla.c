#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	char q = 'z';

	while (q >= 'a')
	{
		putchar(q);
		q--;
	}
	putchar('\n');
	return (0);
}
