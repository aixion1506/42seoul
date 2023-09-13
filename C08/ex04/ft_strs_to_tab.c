/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:45:58 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/13 21:53:39 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		i;
	char	*dest;
	char	*d;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof (char) + 1);
	d = dest;
	if (!d)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;
	struct s_stock_str	*d;

	i = 0;
	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	d = arr;
	if (!d)
		return (0);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
/*
void	ft_show_tab(struct s_stock_str *par);
#include <stdio.h>
int main(int ac, char **av)
{
    struct s_stock_str  *res;
    res = ft_strs_to_tab(ac, av);
    ft_show_tab(res);
    return (0);
}
*/
