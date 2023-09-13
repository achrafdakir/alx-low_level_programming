#include <stdio.h>
/**
 * main - The entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: always zero
 */
int main(int argc, char **argv)
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
