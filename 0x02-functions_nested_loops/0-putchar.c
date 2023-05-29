#include <unistd.h>
#include "main.h"
/**
 * main - Write a program that prints _putchar
 *achraf Dakir
 * Return: Success 1 Error -1
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
