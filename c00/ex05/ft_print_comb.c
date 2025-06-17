/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:37:16 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/04 16:42:06 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	str[3];

	str[0] = '0';
	while (str[0] <= '7')
	{
		str[1] = str[0] + 1;
		while (str[1] <= '8')
		{
			str[2] = str[1] + 1;
			while (str[2] <= '9')
			{
				write(1, &str, 3);
				if (!(str[0] == '7' && str[1] == '8' && str[2] == '9'))
					write(1, ", ", 2);
				str[2]++;
			}
			str[1]++;
		}
		str[0]++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
