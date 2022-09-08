#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	printf("size of a char: %ld byte\n(s)", sizeof(char));
	printf("size of an int: %ld byte\n(s)", sizeof(int));
	printf("Size of a long long: %ld byte(s)\n", sizeof(long long int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	return (0);
}
