/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:59:17 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/15 16:35:19 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strstr(char *str, char *to_find)
{
	int	i;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		
	}

}

int	main()
{
	char	str[] = "175614654";
	char	to_find[] = "146";

	printf("%s\n", strstr(str, to_find));
}
