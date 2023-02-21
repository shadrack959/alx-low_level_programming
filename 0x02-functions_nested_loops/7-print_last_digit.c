#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @i: the integer to print the last digit of
 *
 * Return: Value of last digit
 */

int print_last_digit(int i)
{
	int k;
	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
		return (0);
}
