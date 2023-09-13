#include <stdio.h>
/**
 * main - the entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: always succes 0
 */
int main(int argc, char **argv)
{
	int i;
	for (int i; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}

	return (0);
}
