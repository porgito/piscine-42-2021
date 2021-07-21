/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:46:26 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/21 17:37:44 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	n;
	int	c;

	c = 0;
	n = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(n * sizeof(int));
	while (min < max)
	{
		tab[c] = min;
		c++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);

	if (*range == NULL)
		return (0);
	return (max - min);
}
