/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:23:32 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/11 17:08:15 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int size;

	size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d",
			tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}
*/
