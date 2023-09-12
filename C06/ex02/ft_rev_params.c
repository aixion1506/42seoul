/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:05:15 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/12 20:05:53 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char	**av)
{
	int	i;
	int	j;

	j = ac - 1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			ft_putchar(av[j][i]);
			i++;
		}
		ft_putchar('\n');
		j--;
	}
	return (0);
}
