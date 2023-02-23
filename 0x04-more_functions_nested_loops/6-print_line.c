#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: parameter
 */

void print_line(int n)
{
int i = 1;
while (i <= n)
{
_putchar(95);
i++;
}
_putchar('\n');
}
