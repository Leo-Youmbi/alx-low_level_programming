#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int lenS1 = 0, lenS2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lenS1] != '\0')
		lenS1++;
	while (s2[lenS2] != '\0')
		lenS2++;

	str = malloc(sizeof(char) * ((lenS1 + lenS2) + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		str[i] = s2[j];
		i++;
	}

	return (str);
}
