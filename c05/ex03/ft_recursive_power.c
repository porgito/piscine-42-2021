/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 22:02:11 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/18 22:33:01 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main()
{
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(14, 3));
	printf("%d\n", ft_recursive_power(5, 1));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(5, -1));
	printf("%d\n", ft_recursive_power(5, 4));
	printf("%d\n", ft_recursive_power(5, 5));
}*/
