/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:10:23 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/12 20:13:20 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

int        main(void)
{
    int a;
    int b;

    a = 1;
    b = 2;
    printf("before: %d %d\n", a, b);
    ft_swap(&a, &b);
    printf("before: %d %d\n", a, b);
}
