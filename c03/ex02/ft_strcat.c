/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:02:33 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/20 12:18:48 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str != '\0')
	{
		str++;
		nbr++;
	}
	return (nbr);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "salut";
	char	src[] = " a tous";

//	printf("%d",ft_strlen(dest));
	printf("%s", ft_strcat(dest, src));
}*/
