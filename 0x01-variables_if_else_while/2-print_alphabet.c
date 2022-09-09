#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int c;

	c = ' ';
	while (c >= 'z')
	{
		c = getc(stdin);
		putchar(c);
	}
	return (0);
}
