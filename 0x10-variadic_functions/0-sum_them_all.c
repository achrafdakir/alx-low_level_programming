i#include "variadic_functions.h"
/**
 * sum_them_all - variadic function sum
 * @n: the number of args
 * @...: the input numbers
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);

}