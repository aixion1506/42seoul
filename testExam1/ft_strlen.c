int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
int	main()
{	
	char *a = "123456";
	int i = ft_strlen(a);
	printf("%d\n", i);
	printf("%s", a);
	return (0);
}
