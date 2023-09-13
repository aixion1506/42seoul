/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunghwpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:24:50 by sunghwpa          #+#    #+#             */
/*   Updated: 2023/09/12 18:44:32 by sunghwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(int *solution)
{
	int	i;

	i = 0;
	while (i < 10)
		ft_putchar(solution[i++] + '0');
	ft_putchar('\n');
}

int	can_attack(int *pos, int q)
{
	int	x;

	x = 0;
	while (x < q)
	{
		if (pos[x] == pos[q] && x != q)
			return (1);
		if (x != q)
		{
			if (pos[x] == pos[q] - (q - x) || pos[x] == pos[q] + (q - x))
				return (1);
		}
		x++;
	}
	return (0);
}

void	ft_ten_queens_puzzle_recursive(int positions[], int pos, int *sols)
{
	int	i;

	i = 0;
	if (pos == 10)
	{
		print_solution(positions);
		(*sols)++;
	}
	else
	{
		while (i <= 9)
		{
			positions[pos] = i;
			if (!can_attack(positions, pos))
				ft_ten_queens_puzzle_recursive(positions, pos + 1, sols);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	positions[10];
	int	sols;

	sols = 0;
	ft_ten_queens_puzzle_recursive(positions, 0, &sols);
	return (sols);
}
/*
int	main(void)
{
	return(ft_ten_queens_puzzle());
}
*/
