#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 *
 */

int main(int argc, char **argv)
{
	int multi;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
		multi = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", multi);

	return (0);
}
