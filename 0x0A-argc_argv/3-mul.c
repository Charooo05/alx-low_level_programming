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
	int i;
	int multi;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = 1;
		multi = 1;

		while (argc < 4)
		{
			multi *= atoi(argv[i]);
			i++;
		}
	printf("%d\n", multi);
	}

	return (0);
}
