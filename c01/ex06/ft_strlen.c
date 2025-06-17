/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:49:53 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/09 21:29:18 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "mundo";
// 	printf("%d\n", ft_strlen(str));
// 	return (0);
// }
