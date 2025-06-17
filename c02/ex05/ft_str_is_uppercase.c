/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:04:53 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 00:24:34 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "ABVCDEF";
// 	char str1[] = "ABCdef1";
// 	char str2[] = "";

// 	printf("================================================\n");
// 	printf("Retornos: \n\n1: Só letras maiúsculas ou se string vazia.\n");
// 	printf("0: Se contiver outros tipos de caracteres.");
// 	printf("\n------------------------------------------------\n");
// 	printf("Valor retornado de \"%s\": %d\n", str, ft_str_is_uppercase(str));
// 	printf("Valor retornado de \"%s\": %d\n", str1, ft_str_is_uppercase(str1));
// 	printf("Valor retornado de \"%s\": %d\n", str2, ft_str_is_uppercase(str2));
// 	printf("================================================\n");
// 	return (0);
// }
