/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:13:11 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/15 16:55:43 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	while (str[a] != '\0')
	{
		b = a - 1;
		if ((str[b] < 'A' || str[b] > 'Z') && (str[b] < 'a' || str[b] > 'z'))
		{
			if (str[a] >= 'a' && str[a] <= 'z')
			{
				if (str[b] < '0' || str[b] > '9')
				{
					str[a] = str[a] - 32;
				}
			}
		}
		a++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quraRnte-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
}
