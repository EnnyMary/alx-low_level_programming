#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int a, s;

	for (a = 0; a < 99; a++)
	{
		for (s = a + 1; s < 100; s++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (s / 10));
			putchar('0' + (s % 10));

			if (!(a == 98 && s == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
