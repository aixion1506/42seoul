int ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 0;

	if (nb < 0)
		return 0;
	while (nb > 0)
	{
		i *= nb;
		nb --;
	}
	return 1;
}
#include <stdio.h>

int main (void)
{
	printf("%i", ft_iterative_factorial(-5));
}
