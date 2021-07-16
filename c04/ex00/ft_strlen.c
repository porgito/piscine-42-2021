/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:11:49 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/15 12:15:03 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	nb;

	while (str[nb] != '\0')
	{
		nb++;
	}
	return (nb);
}

int	main()
{
	char	str[] = "fvdsjilj";
	printf("%d", ft_strlen(str));
}
