/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:08:55 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/12 19:50:43 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (x == 0)
		return (0);
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] <= 127)
		{
			j = i + 1;
			while (j < ft_strlen(str))
			{
				if (str[i] == str[j])
					return (0);
				j++;
			}
			i++;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	int			error;
	long long	lnb;
	char		ch;

	lnb = nbr;
	error = checkerror(base);
	len = ft_strlen(base);
	if (error == 1)
	{
		if (lnb < 0)
		{
			lnb *= -1;
			ft_putchar('-');
		}
		ch = (lnb % len) + '0';
		if (lnb < len)
			ft_putchar(ch);
		else
		{
			lnb /= len;
			ft_putnbr_base(lnb, base);
			ft_putchar(ch);
		}
	}
}

#include <stdio.h>
int main(void)
{
    ft_putnbr_base(-12, "01");
	printf("\n");
    ft_putnbr_base(-40, "01234567");
    printf("\n");
    ft_putnbr_base(0, "0123456789");
    printf("\n");
    ft_putnbr_base(-53, "0123456789abcdef");
	return (0);
}
