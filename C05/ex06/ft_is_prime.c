/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:21:41 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/12 18:43:50 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", 7, ft_is_prime(7));
	return (0);
}
*/
