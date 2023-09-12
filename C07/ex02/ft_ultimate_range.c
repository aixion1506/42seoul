/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:11:20 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/11 19:20:59 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int bound;
	int *buffer;

	i = -1;
	bound = max - min;
	buffer = malloc(bound *sizeof(int));
	*range = buffer;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	while (i++ < bound)
	{
		buffer[i] = min + i;
	}
	return (bound);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 1;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
