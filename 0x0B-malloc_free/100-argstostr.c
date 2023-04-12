#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len, num = ac, i, j, r;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	i = 0;
	while (num--)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}

	i = 0;
	r = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	num = ac;
	while (num--)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[r] = av[i][j];
			r++;
		}

		i++;
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}

	return (str);
}
