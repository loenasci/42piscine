/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:16:27 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 00:22:13 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "helloWorld!";
// 	char str1[] = "helloWorld";
// 	char str2[] = "";

// 	printf("================================================\n");
// 	printf("Retornos: \n\n1: Só caracteres alfabéticos ou se string vazia.\n");
// 	printf("0: Se contiver outros tipos de caracteres.");
// 	printf("\n------------------------------------------------\n");
// 	printf("Valor retornado de \"%s\": %d\n", str, ft_str_is_alpha(str));
// 	printf("Valor retornado de \"%s\": %d\n", str1, ft_str_is_alpha(str1));
// 	printf("Valor retornado de \"%s\": %d\n", str2, ft_str_is_alpha(str2));
// 	printf("================================================\n");
// 	return (0);
// }
