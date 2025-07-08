/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:41:42 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/01 21:16:21 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_verify(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
}

void	rush(int x, int y)
{
	int		column;
	int		row;

	column = 1;
	row = 1;
	ft_verify(x, y);
	while (row <= y)
	{
		while (column <= x)
		{
			if ((column > 1 && column < x) && (row > 1 && row < y))
				ft_putchar(' ');
			else if ((column == 1 && row == 1) || (column == x && row == 1))
				ft_putchar('A');
			else if ((column > 1 && column < x) || (row > 1 && row < y))
				ft_putchar('B');
			else if ((row == y && column == 1) || (row == y && column == x))
				ft_putchar('C');
			column++;
		}
		ft_putchar('\n');
		row++;
		column = 1;
	}
}
