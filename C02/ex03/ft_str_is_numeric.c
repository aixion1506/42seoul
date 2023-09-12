/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:07:20 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/07 16:08:12 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
 {
	printf("%d", ft_str_is_numeric("abcde"));
	printf("\n%d", ft_str_is_numeric("abcd1"));
	printf("\n%d", ft_str_is_numeric("12345"));
}
*/
