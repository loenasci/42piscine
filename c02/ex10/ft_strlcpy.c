/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 15:12:07 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 15:42:19 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char dest[4];
// 	char src[] = "hello world! we are the world.";

// 	printf("Função recriada:\n\n");
// 	printf("Tamanho da origem: %i\n", ft_strlcpy(dest, src, sizeof(dest)));
// 	printf("Copiado para destino: %s\n", dest);
// 	printf("-------------------------------------------\n");
// 	printf("Função original:\n\n");
// 	printf("Tamanho da origem: %zu\n", strlcpy(dest, src, sizeof(dest)));
// 	printf("Copiado para destino: %s\n", dest);
// 	return (0);
// }
