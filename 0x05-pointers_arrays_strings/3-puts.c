#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer for string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
