int alphanumeric(char c)
{
	return ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

char *ft_strcapitalize(char *str)
{
	int i;
	int capitalize = 1;

	i = 0;
	while (str[i] != '\0')
	{
		if (alphanumeric(str[i]))
		{
			if ( capitalize && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			capitalize = 0;
		} else
		{
			capitalize = 1;
		}
		i++;
	}
	return str;
}

#include <stdio.h>
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return 0;
}
