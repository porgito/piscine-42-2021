/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:46:26 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/26 14:50:30 by jlaurent         ###   ########.fr       */
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
		return (0);
	tab = malloc(n * sizeof(int));
	while (min < max)
	{
		tab[c] = min;
		c++;
		min++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (!(*range))
		return (0);
	return (max - min);
}

/*int	main()
{
	int	min;
	int	max;
	int	*range;
	int	test;

	min = 0;
	max = 52;
	test = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (test = %d)", min, max, test);
}*/
