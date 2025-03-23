#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int a;
	int s;

	for (a = 0; a < 9; a++)
	{
		for (s = a + 1; s < 10; s++)
		{
			putchar('0' + a);
			putchar('0' + s);
			if (!(a == 8 && s == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
