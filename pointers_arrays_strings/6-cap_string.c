/**
 * cap_string - capitalizes all words of a string
 * @s: A string
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		else if (s[i] == ','
			|| s[i] == ';'
			|| s[i] == '.'
			|| s[i] == '!'
			|| s[i] == '?'
			|| s[i] == '"'
			|| s[i] == '('
			|| s[i] == ')'
			|| s[i] == '{'
			|| s[i] == '}'
			|| s[i] == '\n'
			|| s[i] == ' '
			|| s[i] == '\\'
			|| s[i] == '\t')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - ('a' - 'A');
			}
		i = i + 1;
	}
	return (s);
}

