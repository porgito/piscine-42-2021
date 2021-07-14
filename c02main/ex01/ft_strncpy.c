/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:16:41 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/14 17:33:06 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int str;

	str = 0;
	while (str != n)
	{
		dest[str] = src[str];
		str++;
	}
	dest[n] = 0;
	return (0);
}

int	main()
{
	char *src;
	char dest[20];
	src = "salut a tous";

	printf("%s\n", src);
	ft_strncpy(dest, src, 7);
	printf("%s\n", dest);
}
