#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2;
	int add, c;

	printf("%d, %d", a, b);

	for(c =3; c <= 50; c++)
	{
		add = a + b;
		printf(", %d", add);
		a = b;
		b = add;
	}
	printf("\n");
	return (0);
}
