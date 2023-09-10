int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return 0;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return 2;
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return nb;
		nb++;
	}
	return 0;
}
#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", 5, ft_find_next_prime(5));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
    printf("%d -> %d\n", 3, ft_find_next_prime(3));
    printf("%d -> %d\n", 4, ft_find_next_prime(4));

	
	return 0;
}
