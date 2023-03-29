char *rot13(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] + 13 - 97) % 26 + 97;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = (s[i] + 13 - 65) % 26 + 65;
		}
		i++;
	}
	return (s);
}
