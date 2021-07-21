/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:45:10 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/20 11:22:28 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb < 0)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while ((nb % i != 0) && i < 63641)
	{
		i++;
		if (nb % i == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}

int	main()
{
	printf("%d\n", ft_is_prime(521));
	printf("%d\n", ft_is_prime(1371));
	printf("%d\n", ft_is_prime(633));
	printf("%d\n", ft_is_prime(958));
	printf("%d\n", ft_is_prime(871));
	printf("%d\n", ft_is_prime(287));
	printf("%d\n", ft_is_prime(1100));
}
