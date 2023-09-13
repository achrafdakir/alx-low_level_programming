#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: succes zero
 */
int main(int argc, char **argv)
{
	int i
	unsigned int var, sum = 0;

	(void) argv;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		var = atoi(argv[i]);
		sum += var;
	}
	printf("%d\n", sum);
	return (0);
}
