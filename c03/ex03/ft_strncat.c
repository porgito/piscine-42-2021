/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:45:59 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/20 12:34:17 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest2;

	dest2 = dest;
	while (*dest2)
		dest2++;
	while (nb-- && *src)
	{
		*dest2++ = *src++;
	}
	*dest2 = '\0';
	return (dest);
}

/*int	main()
{
	char	dest[20] = "salut ";
	char	src[] =  "a tous !";

	printf("%s\n", ft_strncat(dest, src, 19));
}*/
