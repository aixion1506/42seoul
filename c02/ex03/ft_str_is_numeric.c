int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 48) && (str[i] <= 57))
			i++;
		else 
			return 0;
	}
	return 1;
}

#include <stdio.h>
int	main()
 {
	printf("%d", ft_str_is_numeric("abcde"));
	printf("\n%d", ft_str_is_numeric("abcd1"));
	printf("\n%d", ft_str_is_numeric("12345"));
}
