#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		n = n - 1;
	}
	_putchar('\n');
}
