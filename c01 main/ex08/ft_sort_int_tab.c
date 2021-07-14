/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:31:32 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/12 20:45:11 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	c = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				c = tab[a];
				tab[a] = tab[b];
				tab[b] = c;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	int	tab[9] = {5, 8, 4, 99, 7, 1, 29, 11, 300};

	ft_sort_int_tab(tab, 9);

	int	count;
	count = 0;
	while (count <= 8)
	{
		printf("%d, ", tab[count]);
		count++;
	}
	return (0);
}
