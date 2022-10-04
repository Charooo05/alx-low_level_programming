#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 *
 */

int main(int argc, char **argv)
{
	int i = 1;
	int add = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
