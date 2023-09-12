#include <stdio.h>
#include <stdlib.h>

int	ft_str_length(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int	i;
	char	*dest;
	char	*d;

	i = 0;
	d = ((dest = (char	*)malloc(ft_str_length(src) * sizeof(char) + 1)));
	if(!d)
		return NULL;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(void) {
    char *str = "Hello World with malloc()";
    printf("original  : base  : $%s$\n", str);
    char *allocated = ft_strdup(str);
    printf("ft_copied : alloc : $%s$\n", allocated);

    free(allocated);

    return 0;
}
