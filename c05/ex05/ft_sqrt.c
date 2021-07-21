/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:16:54 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/19 14:43:43 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (nb != (c * c))
	{
		c++;
		if (c == 46341)
			return (0);
	}
	return (c);
}

/*int	main()
{
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(-10));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(9));
}*/
