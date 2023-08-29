/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinyokim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:41:57 by jinyokim          #+#    #+#             */
/*   Updated: 2023/08/27 15:26:05 by jinyokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
extern void	ft_putchar(char c);

void	lines(int x, int y, int width, int length)
{
	if ((width == 1 && length == 1) || (width == x && length == y))
	{
		ft_putchar('o');
	}
	else if ((width == 1 && length == y) || (width == x && length == 1))
	{
		ft_putchar('o');
	}
	else if ((length == y) || (length == 1))
	{
		ft_putchar('-');
	}
	else if (width == 1 || width == x || length == 1 || length == y)
	{
		ft_putchar('|');
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
