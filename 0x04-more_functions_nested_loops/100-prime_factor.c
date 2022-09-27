#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(void)
{
	unsigned int i;

	for (i = 2; i < 612852475143 / 2; i++)
	{
		if (i % i == 0 && (i % 2 != 0 || i % 3 != 0 || i % 5 != 0))
			printf("%d", i);
	}
	return (0);
}
