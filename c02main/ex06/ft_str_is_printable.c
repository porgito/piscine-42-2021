/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:29:53 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/14 10:01:18 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	c[] = "a123!@#$%^*gbv";
	char	*p;

	p = c;
	printf("%s = %d\n", c, ft_str_is_printable(p));
}
