/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:55:20 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/20 12:34:58 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	str;

	str = 0;
	while (s1[str] == s2[str] && s1[str] != '\0' && s2[str] != '\0' && n > 0)
	{
		str++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[str] - s2[str]);
}

/*int	main()
{
	char	s1[] = "";
	char	s2[] = "y92oxnhd0lyapjb3kvnuq4xy";
	int	test;

	char	*p;
	char	*i;
	p = s1;
	i = s2;
	printf("%d\n" , ft_strncmp(p, i, 1));
	test = strncmp(p, i, 1);
	printf("%d", test);
}*/
