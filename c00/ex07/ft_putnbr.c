/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:32:24 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/11 11:01:57 by jlaurent         ###   ########.fr       */
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

	if (nb < 0)
	{
		i = -nb;
		ft_putchar('-');
		ft_putnbr(i / 10);
		i %= 10;
	}
	else
	{
		i = nb;
	}
	if (nb > 9)
	{
		ft_putnbr(i / 10);
		i %= 10;
	}
	ft_putchar(i + '0');
}
