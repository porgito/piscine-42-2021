/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:35:13 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/17 20:47:22 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	moins;
	int	signe;
	int	res;

	count = 0;
	moins = 0;
	signe = 1;
	res = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			moins++;
		count++;
	}
	if (moins % 2 == 1)
		signe = signe * -1;
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = (str[count] - '0') + (res * 10);
		count++;
	}
	return (res * signe);
}

/*int	main(void)
{
	char	str[] = "   -++----3563";

	printf("%d", ft_atoi(str));
}*/
