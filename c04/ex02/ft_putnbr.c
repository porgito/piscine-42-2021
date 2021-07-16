/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:26:03 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/15 18:25:12 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		i = -nb;
		ft_putchar('-');
		ft_putnbr(i / 10);
		i %= 10;
	}
	else
		i = nb;
	if (nb > 9)
	{
		ft_putnbr(i / 10);
		i %= 10;
	}
	ft_putchar('0' + i);
}

int	main()
{
	ft_putnbr(-486236);
}
