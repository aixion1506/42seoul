/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:38:19 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/07 17:59:00 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnum(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	else
		putnum(nb % 10);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
