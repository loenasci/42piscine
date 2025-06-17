/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 21:29:57 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/11 13:13:17 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	end;
	int	i;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;
// 	int	arr[5];

// 	arr[0] = 1;
// 	arr[1] = 2;
// 	arr[2] = 3;
// 	arr[3] = 4;
// 	arr[4] = 5;

// 	i = 0;
// 	ft_rev_int_tab(arr, 5);
// 	while (i < 5)
// 		printf("%d ", arr[i++]);
// 	return (0);
// }
