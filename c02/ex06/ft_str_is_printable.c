/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:07:05 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 00:21:02 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "!@#$&*()abc";
// 	char str1[] = "	";
// 	char str2[] = "";

// 	printf("================================================\n");
// 	printf("Retornos: \n\n1: Só char imprimíveis ou se string vazia.\n");
// 	printf("0: Se contiver outros tipos de caracteres.");
// 	printf("\n-----------------------------------------------\n");
// 	printf("Valor retornado de \"%s\": %d\n", str, ft_str_is_printable(str));
// 	printf("Valor retornado de \"%s\": %d\n", str1, ft_str_is_printable(str1));
// 	printf("Valor retornado de \"%s\": %d\n", str2, ft_str_is_printable(str2));
// 	printf("================================================\n");
// 	return (0);
// }
