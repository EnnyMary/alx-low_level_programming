#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int a, s, d;

	for (a = 0; a < 8; a++)
	{
		for (s = a + 1; s < 9; s++)
		{
			for (d = s + 1; d < 10; d++)
			{
				putchar('0' + a);
				putchar('0' + s);
				putchar('0' + d);

				if (!(a == 7 && s == 8 && d == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
