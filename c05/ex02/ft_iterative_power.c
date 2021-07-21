/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 20:00:01 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/18 22:11:20 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = power;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i != 1)
	{
		nb = n * nb;
		i--;
	}
	return (nb);
}

/*int	main()
{
	printf("%d\n", ft_iterative_power(5, -2));
	printf("%d\n", ft_iterative_power(5, 7));
	printf("%d\n", ft_iterative_power(5, 6));
	printf("%d\n", ft_iterative_power(5, 5));
	printf("%d\n", ft_iterative_power(5, 4));
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(5, 1));
	printf("%d\n", ft_iterative_power(5, 0));
}*/
