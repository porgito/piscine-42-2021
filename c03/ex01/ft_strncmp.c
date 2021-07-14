/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:55:20 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/14 19:13:46 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	str;

	str = 0;
	while (s1[str] == s2[str] && s1[str] != s1[n] && s2[str] != s2[n])
	{
		str++;
	}
	return (s1[str] - s2[str]);
}

int	main()
{
	char	s1[] = "salut a tous";
	char	s2[] = "saluz a tour";
	int	test;

	char	*p;
	char	*i;
	p = s1;
	i = s2;
	printf("%d\n" , ft_strncmp(p, i, 8));
	test = strncmp(p, i, 8);
	printf("%d", test);
}
