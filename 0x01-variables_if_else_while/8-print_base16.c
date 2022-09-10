#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	unsigned char c = 0;

	c = 0;
	do {
		putchar(c);
		c++;
	} while (i < 10);

	c = 1;
	while (i < 6)
	{
		putchar('0' + c);
		c++;
	}
	putchar('\n');
	return (0);
}
