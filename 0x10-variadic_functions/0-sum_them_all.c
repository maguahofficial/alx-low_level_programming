#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_of_all - Returns Sum of all its paramters.
 * @n: The numb of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list apvar;
	unsigned int i, sum = 0;

	va_start(apvar, n);

	for (i = 0; i < n; i++)
		sum += va_arg(apvar, int);

	va_end(apvar);

	return (sum);
}
