/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonyocho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:44:40 by wonyocho          #+#    #+#             */
/*   Updated: 2023/08/27 15:06:44 by jinyokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern void	ft_putchar(char c);

void	lines(int x, int y, int width, int length)
{
	if ((width == x && length == y) || (width == 1 && length == y))
	{
		ft_putchar('A');
	}
	else if ((width == x && length == 1) || (width == 1 && length == 1))
	{
		ft_putchar('C');
	}
	else if ((length == y) || (length == 1) || (width == x) || (width == 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	width;
	int	length;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	width = x;
	length = y;
	while (length != 0)
	{
		while (width != 0)
		{
			lines(x, y, width, length);
			width--;
		}
		ft_putchar('\n');
		width = width + x;
		length--;
	}
}
