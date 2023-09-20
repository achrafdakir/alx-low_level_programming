#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string seperator
 * @n: number of args
 * @...: input args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		while (i < n)
		{
			printf("%s", (str = va_arg(args, char *))  ? str : "(nil)");

			if (i != n - 1  && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(args);
	}
	printf("\n");
}
