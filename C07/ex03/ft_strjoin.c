#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] != '\0';
	return (dest);
}

int	ft_final_len(char	**strs, int	size, int	lens)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		final_len += lens;
		i++;
	}
	final_len -= lens;
	return (final_len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	full_len;
	int	i;
	char	*str;
	char	*d;

	if (size == 0)
		return ((char	*)malloc(sizeof(char)));
	full_len = ft_final_len(strs, size, ft_strlen(sep));
}
