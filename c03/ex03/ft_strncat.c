/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:45:59 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/15 09:57:32 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str != '\0')
	{
		nbr++;
		str++;
	}
	return (nbr);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	u;
	int	a;

	a = ft_strlen(dest);
	u = 0;
	while (u != nb)
	{
		dest[a] = src[u];
		a++;
		u++;
	}
	dest[a] = '\0';
	return (dest);
}

int	main()
{
	char	dest[20] = "salut ";
	char	src[] =  "a tous !";

	printf("%s\n", ft_strncat(dest, src, 0));
}
