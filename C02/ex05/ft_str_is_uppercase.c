/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:09:35 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/07 16:10:31 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d", ft_str_is_uppercase("abcde"));
	printf("\n%d", ft_str_is_uppercase("ABCDE"));
	printf("\n%d", ft_str_is_uppercase("ABCD1"));
}
*/
