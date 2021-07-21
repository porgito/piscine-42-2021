/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:46:05 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/21 16:33:24 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	n;
	int	c;

	c = 0;
	n = max - min;
	if (min >= max)
		return (0);
	tab = malloc(n * sizeof(int));
	while (min < max)
	{
		tab[c] = min;
		min++;
		c++;
	}
	return (tab);
}

/*int	main()
{
	int	c = 0;
	int	*tab;

	tab = ft_range(-2589, -2500);
	while (c < 89)
	{
		printf("%d\n", tab[c]);
		c++;
	}
}*/
