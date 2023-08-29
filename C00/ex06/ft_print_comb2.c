#include <unistd.h>
void ft_write(int a, int b)
{
	char a_tens = a / 10 + '0';
	char a_ones = a % 10 + '0';
	char b_tens = b / 10 + '0';
	char b_ones = b % 10 + '0';

	write(1, &a_tens, 1);
   	write(1, &a_ones, 1);
	write(1, " ", 1);
	write(1, &b_tens, 1);
	write(1, &b_ones, 1);
}


void ft_print_comb2(void)
{
	int a = 0;
	int b;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
		ft_write(a, b);
		if (a != 98 || b != 99)
			write(1, ", ", 2);	

		b ++;
		}
		a ++;
	}
}
	


int	main(void)
{
	ft_print_comb2();
	return (0);
}
