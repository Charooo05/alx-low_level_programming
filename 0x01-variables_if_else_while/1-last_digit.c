#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	printf("Last digit of %d is ", n);
	if (n > 5)
		printf("%1d and is greater than 5\n", n);
	if (n == 0)
		printf("%d and is 0\n", n);
	if ((n < 6) && (n != 0))
		printf("%d and is less than 6 and not 0\n", n);
	return (0);
}