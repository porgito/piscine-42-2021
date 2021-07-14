/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:52:52 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/12 20:41:56 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	t;

	a = 0;
	b = 0;
	while (b < size / 2)
	{
		a = tab[size - b - 1];
		tab[size - b - 1] = tab[b];
		tab[b] = a;
		b++;
	}
}

int	main()
{
	int	tab[8] = {1, 2, 5, 12, 56, 78, 125, 847};

	ft_rev_int_tab(tab, 8);

	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
	printf("%d ", tab[4]);
	printf("%d ", tab[5]);
	printf("%d ", tab[6]);
	printf("%d ", tab[7]);
}
