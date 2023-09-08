void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}


#include <stdio.h>

int	main()
{
	int x = 10;
	int y = 2;
	
	ft_ultimate_div_mod(&x, &y);
	printf("div : %d\n", x);
	printf("mod : %d", y);
}
