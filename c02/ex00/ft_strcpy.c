/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:29:38 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 13:13:32 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

 #include <stdio.h>

 int	main(void)
 {
 	char	origin[] = "hello world!";
 	char	destination[20];

 	ft_strcpy(destination, origin);
 	printf("================================================\n");
 	printf("Valor a ser copiado para o destino: %s\n", origin);
 	printf("------------------------------------------------");
 	printf("\nValor copiado para destino: %s\n", destination);
 	printf("================================================\n");
 	return (0);
 }
