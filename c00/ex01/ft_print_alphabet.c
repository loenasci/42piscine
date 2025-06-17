/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:49:49 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/04 15:18:38 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	count;

	count = 97;
	while (count <= 122)
	{
		write(1, &count, 1);
		count++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
