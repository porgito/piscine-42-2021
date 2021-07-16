/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:07:50 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/16 10:15:57 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
//{
//	
//}

int	main()
{
	char	dest[5] = "test1";
	char	src[5] = "test2";

	printf("test : %s\n", strlcat(dest, src, 5));
}
