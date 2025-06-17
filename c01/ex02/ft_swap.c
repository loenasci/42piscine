/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 22:13:23 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/09 19:14:32 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a = 4;
// 	int	b = 6;
//
// 	printf("Valores iniciais:\n\nletra a: %d | letra b: %d\n\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("Valores trocados:\n\nletra a: %d | letra b: %d\n", a, b);
// 	return (0);
// }
