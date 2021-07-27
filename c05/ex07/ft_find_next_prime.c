/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 09:54:46 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/22 10:06:42 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 3)
		return (2);
	if (nb == 3)
		return (3);
	while ((nb % i != 0) && i < 63641)
	{
		i++;
		if (nb % i == 0)
			return (0);
		else
			return (nb);
	}
	return (0);
}

int	main()
{
	printf("%d\n", ft_is_prime(-548));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(6));
}
