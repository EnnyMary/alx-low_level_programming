#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	char w = 'a';
	char q = 'A';

	while (w <= 'z')
	{
		putchar(w);
		w++;
	}
	while (w <= 'Z')
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
