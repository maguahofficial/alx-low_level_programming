#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints Anything
 * @format: list types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list listvar;

	va_start(listvar, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(listvar, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(listvar, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(listvar, double));
					break;
				case 's':
					str = va_arg(listvar, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(listvar);
}
