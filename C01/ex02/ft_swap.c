void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main()
{
	int c;
	int d;

	c = 4;
	d = 8;

	ft_swap(&c, &d);
	printf("c = %d, d = %d", c, d);
	return 0;	
}
