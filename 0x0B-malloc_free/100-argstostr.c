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
	for (i = 0; i < ac; i++)
		for (n = 0; av[i][j]; j++)
			len++;
	len += ac;


	r = 0;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
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
