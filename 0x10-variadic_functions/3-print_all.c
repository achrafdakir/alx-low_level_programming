#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "", *s;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
					break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
					break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
					break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
