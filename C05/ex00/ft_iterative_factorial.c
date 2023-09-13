/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:15:12 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/13 13:52:20 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		i *= nb;
		nb --;
	}
	return (i);
}

#include <stdio.h>

int main (void)
{
	printf("%i", ft_iterative_factorial(4));
}

