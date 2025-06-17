/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:22:55 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/11 13:10:46 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//#include <stdio.h>

// int	main(void)
// {
// 	int a = 16;
// 	int b = 3;
// 	int div;
// 	int mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d | %d\n", div, mod);
// 	return (0);
// }
