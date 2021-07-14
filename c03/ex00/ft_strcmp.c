/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:18:01 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/14 19:13:51 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] == s2[n] && s2[n] != '\0' && s1[n] != '\0')
	{
		n++;
	}
	return (s1[n] - s2[n]);
}

int	main()
{
	char	s1[] = "test";
	char	s2[] = "tesu";
	int	test;

	char	*p;
	char	*i;
	p = s1;
	i = s2;
	printf("%d\n", ft_strcmp(p, i));
	test =  strcmp(p, i);
	printf("%d", test);
}
