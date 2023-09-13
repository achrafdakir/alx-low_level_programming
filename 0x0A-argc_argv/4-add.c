i#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: succes zero
 */
int main(int argc, char **argv)
{
	int i, var, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			return (printf("Error\n"), 1);
		}
		var = atoi(argv[i]);
		sum += var;
	}
	printf("%d\n", sum);
	return (0);
}
