#include <stdio.h>

/**
 * main - entrance
 * Return: void
 */

void main(void)
{
	int a = 0;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
}
