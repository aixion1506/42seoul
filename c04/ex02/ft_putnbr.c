/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:13:59 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/12 16:56:34 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		ch;
	long long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		lnb *= (-1);
		write(1, "-", 1);
	}
	ch = (lnb % 10) + '0';
	if (lnb < 10)
		write(1, &ch, 1);
	else
	{
		lnb = lnb / 10;
		ft_putnbr(lnb);
		write(1, &ch, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}
*/
