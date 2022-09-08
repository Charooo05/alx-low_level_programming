#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("size of double is: %ld - byte\n", sizeof(double));
	printf("size of float is: %ld - byte\n", sizeof(float));
	printf("size of char is: %ld - byte\n", sizeof(char));
	printf("size of int is: %ld - byte\n", sizeof(int));
	printf("Size of a long long int: %ld - byte\n", sizeof(long long int));
	printf("size of a long int is: %ld - byte\n", sizeof(long int));
	return (0);
}
