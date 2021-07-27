/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 10:11:27 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/26 14:49:05 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		l;
	int		c;

	l = 0;
	c = 0;
	i = 0;
	tab = malloc(sizeof(strs));
	while (i < size)
	{
		l = 0;
		while (strs[i][l] != '\0')
		{
			tab[c++] = strs[i][l++];
		}
		l = 0;
		while (sep[l] != '\0' && i != size - 1)
		{
			tab[c++] = sep[l++];
		}
		i++;
	}
	tab[c] = '\0';
	return (tab);
}

/*int	main()
{
	char	*tab[3];
	tab[0] = "salut";
	tab[1] = "test";
	tab[2] = "youpi";
	printf("%s\n", ft_strjoin(3, tab, "--->"));
}*/
