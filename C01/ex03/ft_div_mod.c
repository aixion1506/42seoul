void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = b % b;
	}
}


#include <stdio.h>
int main()
{
	int c;
	int d;

	c = 20;
	d = 5;

	ft_div_mod(c, d, &c, &d);
	printf("c = %d, d = %d", c, d);
}
