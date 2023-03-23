#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: Number of args to be summed up, constant & unsigned
 *
 * Return: Sume of all args, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
