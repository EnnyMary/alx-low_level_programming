#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	char q = 'a';

	while (q <= 'z')
	{
		if (q != 'q' && q != 'e')
			putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
