/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loda-sil <loda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:30:35 by loda-sil          #+#    #+#             */
/*   Updated: 2025/06/17 11:25:19 by loda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	verify;

	i = 0;
	verify = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (verify && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			verify = 0;
		}
		else
			verify = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "oi, tudo bem? 42PALAVRAS [qua]renta-e-duas; cinquenta[e+um";

// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	return (0);
// }
