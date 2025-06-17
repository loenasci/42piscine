/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:55:38 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 11:29:28 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "0123456789";
	char str1[] = "0123456789hello";
	char str2[] = "";

	printf("================================================\n");
	printf("Retornos: \n\n1: Só caracteres numéricos ou se string vazia.\n");
	printf("0: Se contiver outros tipos de caracteres.");
	printf("\n------------------------------------------------\n");
	printf("Valor retornado de \"%s\": %d\n", str, ft_str_is_numeric(str));
	printf("Valor retornado de \"%s\": %d\n", str1, ft_str_is_numeric(str1));
	printf("Valor retornado de \"%s\": %d\n", str2, ft_str_is_numeric(str2));
	printf("================================================\n");
	return (0);
}
