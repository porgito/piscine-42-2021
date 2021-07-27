/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:07:26 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/26 20:33:51 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *) malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tableau;
	int			i;

	i = 0;
	tableau = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tableau == NULL)
		return (NULL);
	while (i < ac)
	{
		tableau[i].size = ft_strlen(av[i]);
		tableau[i].str = av[i];
		tableau[i].copy = ft_strdup(av[i]);
		i++;
	}
	tableau[i].size = 0;
	tableau[i].str = 0;
	tableau[i].copy = 0;
	return (tableau);
}
