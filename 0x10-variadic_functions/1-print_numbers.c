#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbs, followed by a new line.
 * @separator: The str to be printed between numbs.
 * @n: The number of integers passed to the function.
 * @...: A variable numb of numbs to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numsvar;
	unsigned int index;

	va_start(numsvar, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numsvar, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numsvar);
}
