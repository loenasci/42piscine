/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:40:23 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 15:29:59 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	origin[] = "abcdefsdgsdfsd";
	char	destination[20];
	int		n;

	n = 8;
	ft_strncpy(destination, origin, n);
	printf("Valor disponível em origem: %s", origin);
	printf("\n------------------------------------------------\n");
	printf("%d char copiados para o destino: %s\n", n, destination);
	printf("================================================\n");
	return (0);
}
