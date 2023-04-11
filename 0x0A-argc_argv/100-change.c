#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int res = 0, num, i, rem;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num <= 0)
			printf("%d\n", res);
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (num >= coins[i])
				{
					rem = num;
					num %= coins[i];
					if (num != 0)
					{
						res += ((rem - num) / coins[i]);
					}
					else
					{
						res += rem / coins[i];
						break;
					}
				}
			}
			printf("%d\n", res);
		}
		return (0);
	}
}
