#include<unistd.h>
/**
 * main - the entry point
 * Return: failed return one
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, q, 59);
	return (1);
}
