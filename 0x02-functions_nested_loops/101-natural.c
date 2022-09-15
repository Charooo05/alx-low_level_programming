#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 *
 */

int main(void)
{
	int multiple = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (multiple < 50)
	{
		printf("%ld", c);
		multiple++;
		a = b;
		b = c;
		c = a + b;
		if (multiple < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
