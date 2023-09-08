#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	// 루프가 `null`이 아닌 곳에서만 실행
	while (str[i] != '\0')
	{
		// 
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main()
{
	char str[] = "abcdefghj";
	printf("%s", ft_strupcase(str));
}
