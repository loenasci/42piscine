/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 22:52:12 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/11 13:55:27 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	temp;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;
// 	int	str[5];

// 	i = 0;
// 	str[0] = 5;
// 	str[1] = 3;
// 	str[2] = 1;
// 	str[3] = 4;
// 	str[4] = 2;

// 	printf("Before function: ");
// 	while (str[i])
// 		printf("%d ", str[i++]);
// 	printf("\n--------------------------\n");
// 	ft_sort_int_tab(str, 5);
// 	i = 0;
// 	printf("After function:  ");
// 	while (str[i])
// 		printf("%d ", str[i++]);
// 	return (0);
// }
