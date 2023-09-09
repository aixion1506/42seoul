int ft_is_prime(int nb)
{
	int	i;
	i = 2;

	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % 2))
			return (0);
		else
			i += 1;
	}
	return (1);
}

#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", -2, ft_is_prime(-2));
	return (0);
}
