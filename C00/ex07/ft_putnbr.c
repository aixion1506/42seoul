#include <unistd.h>

void putchar(char x)
{
	write(1, &x, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putchar('-');
		putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		putchar(nb + 48);
	}
}

int main (void)
{
	ft_putnbr(42);
	putchar('\n');
}
