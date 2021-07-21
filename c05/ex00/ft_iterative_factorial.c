/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:52:36 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/18 18:30:08 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

/*int	main()
{
	printf("%d  ", ft_iterative_factorial(-1));
	printf("%d  ", ft_iterative_factorial(0));
	printf("%d  ", ft_iterative_factorial(1));
	printf("%d  ", ft_iterative_factorial(2));
	printf("%d  ", ft_iterative_factorial(3));
	printf("%d  ", ft_iterative_factorial(4));
	printf("%d  ", ft_iterative_factorial(5));
	printf("%d  ", ft_iterative_factorial(6));
	printf("%d  ", ft_iterative_factorial(7));
	printf("%d  ", ft_iterative_factorial(8));
	printf("%d  ", ft_iterative_factorial(9));
}*/
