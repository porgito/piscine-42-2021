/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:43:25 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/15 13:12:36 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int str;

	str = 0;
	while (src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
    
	return (dest);
}

int	main()
{
	char *src;
	char dest[6];
	src = "salut";

	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
