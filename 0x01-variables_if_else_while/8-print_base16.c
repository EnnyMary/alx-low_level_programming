#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int a = 0;
	char b = 'a';

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
