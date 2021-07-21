/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:32:30 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/19 14:44:24 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main()
{
	printf("%d  ", ft_recursive_factorial(5));
	printf("%d  ", ft_recursive_factorial(1));
	printf("%d  ", ft_recursive_factorial(0));
	printf("%d  ", ft_recursive_factorial(-1));
	printf("%d  ", ft_recursive_factorial(8));
	printf("%d  ", ft_recursive_factorial(11));
	printf("%d  ", ft_recursive_factorial(12));
	printf("%d  ", ft_recursive_factorial(9));
	printf("%d  ", ft_recursive_factorial(7));
	printf("%d  ", ft_recursive_factorial(-10));
	printf("%d  ", ft_recursive_factorial(3));
}*/
