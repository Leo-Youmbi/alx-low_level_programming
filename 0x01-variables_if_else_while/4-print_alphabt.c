#include <stdio.h>
#include <string.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i == 'e') || (i == 'q'))
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
