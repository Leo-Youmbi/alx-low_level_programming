#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
*/

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if ((num == 50) || (num == 52))
			continue;
		_putchar(num);
	}
	_putchar('\n');
}
