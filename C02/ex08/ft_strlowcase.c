#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	// 루프가 `null`이 아닌 곳에서만 실행
	while (str[i] != '\0')
	{
		// 
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "ABCDEFG";
	printf("%s", ft_strlowcase(str));
}
