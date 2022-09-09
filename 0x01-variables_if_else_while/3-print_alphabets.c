#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while  (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
