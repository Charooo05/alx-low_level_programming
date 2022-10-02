#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 *
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	do {
		printf("%s\n", argv[i]);
		i++;
	} while (i < argc);

	return (0);
}
